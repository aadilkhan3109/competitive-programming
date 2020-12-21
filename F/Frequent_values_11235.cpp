#include <bits/stdc++.h>
using namespace std;
class SegmentTree
{
private:
  vector<int> st, A;
  int n;

  int left(int p) { return p << 1; }

  int right(int p) { return (p << 1) + 1; }

  void build(int p, int L, int R)
  {
    if (L == R)
      st[p] = L;
    else
    {
      build(left(p), L, (L + R) / 2);
      build(right(p), (L + R) / 2 + 1, R);
      int p1 = st[left(p)], p2 = st[right(p)];
      st[p] = (A[p1] >= A[p2]) ? p1 : p2;
    }
  }

  int rmq(int p, int L, int R, int i, int j)
  {
    if (i > R || j < L)
      return -1;
    if (L >= i && R <= j)
      return st[p];
    int p1 = rmq(left(p), L, (L + R) / 2, i, j);
    int p2 = rmq(right(p), (L + R) / 2 + 1, R, i, j);
    if (p1 == -1)
      return p2;
    if (p2 == -1)
      return p1;
    return (A[p1] >= A[p2]) ? p1 : p2;
  }

public:
  SegmentTree(const vector<int> &_A)
  {
    A = _A;
    n = (int)A.size();
    st.assign(4 * n, 0);
    build(1, 0, n - 1);
  }

  int rmq(int i, int j) { return rmq(1, 0, n - 1, i, j); }
};
int main(){
  int n,q;
  while(cin>>n && n!=0){
    cin>>q;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    vector<int> a(n);
    map<int,int> ma;
    a[0]=1;
    ma[arr[0]]=1;
    for(int i=1;i<n;i++){
      ma[arr[i]]++;
      if(arr[i]==arr[i-1]) a[i]=(a[i-1]+1);
      else a[i]=1;
    }
    SegmentTree se(a);
    int aa,bb,ans;
    for(int i=0;i<q;i++){ 
      cin>>aa>>bb;
      aa--,bb--;
      if(arr[aa]==arr[bb]){cout<<bb-aa+1<<endl;}
      else {
        int j=upper_bound(arr,arr+n,arr[aa])-arr;
        cout<<max(ma[arr[aa]]-a[aa]+1,a[se.rmq(j,bb)])<<endl;
      }
    }
    
  }
}