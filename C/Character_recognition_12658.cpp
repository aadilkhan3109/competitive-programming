#include <bits/stdc++.h>
using namespace std; 
int main(){
   ios::sync_with_stdio(0);
   cin.tie(0);
   int n;
   cin>>n;
   vector<string> d;
   string t;
   getline(cin,t);
   for(int i=0;i<5;i++){
      getline(cin,t);
      d.push_back(t);
   }
   string res="";
   n=d[0].size();
   for (int i = 0; i < n; i++){
      if(d[0][i]=='*' && d[1][i]=='*' &&d[2][i]=='*') res+="1";
      else if(d[0][i]=='*' && d[1][i]=='.' &&d[2][i]=='*' && d[3][i]=='*'){
         res+="2";
         i+=2;
      }else if(d[0][i]=='*' && d[1][i]=='.' &&d[2][i]=='*' && d[3][i]=='.'){
         res+="3";
         i+=2;
      }
   }
   cout<<res<<endl;
   return 0;
}