#include <bits/stdc++.h>
using namespace std;

int main(){
  int t,c=1;
  string sss;
  cin>>t;
  getline(cin,sss);
  while(t--){
    string l,s;
    int f=1;
    getline(cin,l);
    for(int i=0;i<l.size();i++)
      if(isalpha(l[i]))s+=l[i];
    double sq=sqrt(s.size());
    int m = sq;
    if(sq-m == 0){
      char ta[m][m];
      int loc=0;
      for(int i=0;i<m;i++)
        for(int j=0;j<m;j++)
          ta[i][j]=s[loc++];
      
      for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
          if(f){
            if(ta[i][j]!=ta[j][i] || ta[i][j]!=ta[(m-1)-i][(m-1)-j] || ta[i][j]!=ta[(m-1)-j][(m-1)-i]){
              f=0;
              break;
            }
          }
        }
      }
    }else f=0;
    if(f)printf("Case #%d:\n%d\n",c++,m);
    else printf("Case #%d:\nNo magic :(\n",c++);
  }
}