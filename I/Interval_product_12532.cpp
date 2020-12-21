#include <bits/stdc++.h>
using namespace std;
class SegmentTree { 
private: vector<char> st;
  vector<int> A;
  int n;

  int left (int p) { return p << 1; } 
  
  int right(int p) { return (p << 1) + 1; }

  char sign(int a){
    if(a==0) return '0';
    else if(a<0) return '-';
    else return '+';
  }
  
  char mult(char a,char b){
    if(a=='0'||b=='0') return '0';
    else if(a==b) return '+';
    else return '-';
  }
  void build(int p, int L, int R) {
    if (L == R) st[p] = sign(A[L]); 
    else { 
      build(left(p) , L , (L + R) / 2);
      build(right(p), (L + R) / 2 + 1, R );
      st[p]=mult(st[left(p)], st[right(p)]);
  } }
  int rmq(int p, int L, int R, int i, int j) { 
    if (i > R || j < L) return -1;
    if (L >= i && R <= j) return st[p];
    char p1 = rmq(left(p) , L , (L+R) / 2, i, j);
    char p2 = rmq(right(p), (L+R) / 2 + 1, R , i, j);
    if (p1 == -1) return p2; 
    if (p2 == -1) return p1; 
    return mult(p1,p2);
  }
  void update(int p,int l,int r,int i,int j){
    if(l==r && l==i) st[p]=sign(j);
    else if(i>=l && i<=r){
      update(left(p),l,(l+r)/2,i,j);
      update(right(p),(l+r)/2+1,r,i,j);
      st[p]=mult(st[left(p)],st[right(p)]);
    }
  }

public:
  SegmentTree(const vector<int> &_A) {
    A = _A; n = (int)A.size(); 
    st.assign(4 * n, 0); 
    build(1, 0, n - 1);
  }
  
  int rmq(int i, int j) { return rmq(1, 0, n - 1, i, j); } 
  void update(int i,int j){
    update(1, 0, n - 1, i, j);
  }
};
int main(){
  int n,k;
  while(cin>>n>>k){
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    SegmentTree st(a);
    string res="";
    for(int i=0;i<k;i++) {
      char q;
      int f,s;
      cin>>q>>f>>s;
      if(q=='C') st.update(f-1,s);
      else{
        res += st.rmq(f-1,s-1);
        // cout<<x<<endl;
        // if(x==0) res +='0';
        // else if(x<0) res+='-';
        // else res +='+';
      }
    }
    cout<<res<<endl;
  }
}