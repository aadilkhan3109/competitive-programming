#include <bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int r,d,k;
    cin>>r;
    long long cj[30],n=0,te=0;
    for(int i=0;i<=r;i++) cin>>cj[i];
    cin>>d>>k;
    while(te<k){
      n++;
      te+=n*d;
    }
    long long he=cj[0];
    for(int i=1;i<=r;i++) he+=(cj[i]*pow(n,i));
    cout<<he<<endl;
  }
}