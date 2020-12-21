#include <bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    long a,b,x,y;
    cin>>a>>b;
    if((a-b)%2!=0){
      cout<<"impossible\n";
    }else {
      y=(a-b)/2;
      x=a-y;
      if(x<0 || y<0) cout<<"impossible"<<endl;
      else cout<<max(x,y)<<" "<<min(x,y)<<endl;
    }
  }

  return 0;
}