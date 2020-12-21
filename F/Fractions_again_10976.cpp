#include <bits/stdc++.h>
using namespace std;
int main(){
  int n;
  while(cin>>n){
    int x=n;
    vector<pair<int,int>> v;
    while(x++){
      long long y=(double)(x*n)/(x-n);
      if(x>y)break;
      if(y>0 && n==(double)(x*y)/(x+y)){
        v.push_back(pair<int,int>((int)y,(int)x));
      }
    }
    cout<<v.size()<<endl;
    for(auto a: v)
      printf("1/%d = 1/%d + 1/%d\n",n,a.first,a.second);
  }
}