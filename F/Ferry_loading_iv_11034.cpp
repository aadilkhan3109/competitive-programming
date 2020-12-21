#include <bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int l,n,x,res=0,tot=0,si=0;
    string s;
    queue<int> left,right;
    cin>>l>>n;
    l*=100;

    while(n--){
      cin>>x>>s;
      if(s=="left") left.push(x);
      else right.push(x);
    }

    while(!left.empty() || !right.empty()){
      if(si==0){
        while(!left.empty() && (tot+left.front())<l){
          tot+=left.front();
          left.pop();
        }
        si=1;
        tot=0;
        res++;
      }else if(si==1){
        while(!(right.empty()) && (tot+right.front())<l){
          tot+=right.front();
          right.pop();
        }
        si=tot=0;
        res++;
      }
    }
    cout<<res<<endl;
  }
}