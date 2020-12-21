#include <bits/stdc++.h>
using namespace std;

int main(){
  string s;
  while(getline(cin,s)){
    if(s=="Game Over") break;
    int res=0,f=0;
    for(int i=0;i<s.size();i+=2){
      if(s[i]=='X') f+=2;
      else {
        f++;
      }
      if(s[i]=='/'){
        res-=(s[i-2]-'0');
        res+=10;
        if(s[i+2] =='X'){
          res+=10;
        }else {
          res+=(s[i+2]-'0');
        }
      }
      else if(s[i]=='X'){
        res+=10;
        if(s[i+2] == 'X'){
          res+=10;
          if(s[i+4] == 'X') res+=10;
          else res+=(s[i+4]-'0');
        }else{
          res+=(s[i+2]-'0');
          if(s[i+4] == 'X') res+=10;
          else if(s[i+4]=='/') {
            res-=(s[i+2]-'0');
            res+=10;
          }
          else res+=(s[i+4]-'0');
        }
      }
      else res+=(s[i]-'0');
      if(f/2==10) break;
    }
    cout<<res<<endl;
  }
  return 0;
}