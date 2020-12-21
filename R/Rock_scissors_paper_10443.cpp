#include <bits/stdc++.h>
using namespace std;
char ch[101][101];
void fill(char a,int i,int j){
  if((i>=0 && i<101) && (j>=0 && j<101))
    ch[i][j]=a;
}

int main(){
  int t,fl=0;
  cin>>t;
  while(t--){
    int r,c,n;
    if(fl)cout<<endl;
    cin>>r>>c>>n;
    for(int i=0;i<r;i++)
      for(int j=0;j<c;j++) cin>>ch[i][j];
    
    while(n--){
      char tem[r][c];
      for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
          tem[i][j]=ch[i][j];
      for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
          if(tem[i][j]=='R'){
            if(tem[i+1][j] == 'S') fill('R', i+1,j);
            if(tem[i-1][j] == 'S') fill('R', i-1,j);
            if(tem[i][j+1] == 'S') fill('R', i,j+1);
            if(tem[i][j-1] == 'S') fill('R', i,j-1);
          }
          else if(tem[i][j]=='S'){
            if(tem[i+1][j] == 'P') fill('S', i+1,j);
            if(tem[i-1][j] == 'P') fill('S', i-1,j);
            if(tem[i][j+1] == 'P') fill('S', i,j+1);
            if(tem[i][j-1] == 'P') fill('S', i,j-1);
          }
          else if(tem[i][j]=='P'){
            if(tem[i+1][j] == 'R') fill('P', i+1,j);
            if(tem[i-1][j] == 'R') fill('P', i-1,j);
            if(tem[i][j+1] == 'R') fill('P', i,j+1);
            if(tem[i][j-1] == 'R') fill('P', i,j-1);
          }
        }
      }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++)
          cout<<ch[i][j];
        cout<<endl;
      }
      fl=1;
  }
  return 0;
}