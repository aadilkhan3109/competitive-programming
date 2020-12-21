#include <bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(0);
   cin.tie(0);
   int t;
   cin>>t;
   while(t--){
      string s;
      int r=0,h =1;
      cin>>s;
      for(int i =0;i<s.size();i++){
         if(s[i] == 'O'){
            r+=h;
            h++;
         }
         else if(s[i]=='X') h=1;
      }
      cout<<r<<endl;
   }


   return 0;
}