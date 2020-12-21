#include <bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(0);
   cin.tie(0);
   int t;
   cin>>t;
   while(t--){
      int n,h,hh,r=-1e9;
      cin>>n>>h;
      for(int i =1;i<n;i++){
         cin>>hh;
         if(h-hh>r) r = h - hh;
         if(h<hh) h = hh;
      }
      cout<<r<<endl;
   }
   return 0;
}