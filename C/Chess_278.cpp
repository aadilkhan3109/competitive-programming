#include <bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--){
    char p;
    float n,m;
    cin>>p>>n>>m;
    if(p=='r'){
      cout<<min(n,m)<<endl;
    }
    else if(p=='k'){
      cout<<ceil((m*n)/2)<<endl;
    }
    else if(p=='Q'){
      cout<<min(n,m)<<endl;
    }
    else {
      cout<<ceil(m/2)*ceil(n/2)<<endl;
    }
  }

  return 0;
}