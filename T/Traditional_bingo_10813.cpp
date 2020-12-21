#include <bits/stdc++.h>
using namespace std;
int ta[5][5];
bool check(int x){
  for(int i=0;i<5;i++)
    for(int j=0;j<5;j++)
      if(ta[i][j]==x) ta[i][j]=-1;

  for(int i=0,j=0;i<5;i++){
    for(j=0;j<5;j++)
      if(ta[i][j]!=-1)break;
    if(j==5) return true;
    else j=0;
  }
  for(int i=0,j=0;i<5;i++){
    for(j=0;j<5;j++)
      if(ta[j][i]!=-1)break;
    if(j==5) return true;
    else j=0;
  }
  int i=0,j=0;
  for(i,j;i<5 && j<5;j++,i++)
    if(ta[i][j]!=-1) break;
  if(i==5 && j==5) return true;
  i=0,j=4;
  for(i,j;i<5 && j>=0;j--,i++)
    if(ta[i][j]!=-1) break;
  if(i==5 && j==-1) return true;

  return false;
}
int main(){
  int t;
  cin>>t;
  while(t--){
    for(int i=0;i<5;i++){
      for(int j=0;j<5;j++){
        if(i==2 && j==2){
          ta[2][2]=-1;
          continue;
        }
        else cin>>ta[i][j];
      }
    }
    int r=1,g=0,flag=1;
    while(g<75){
      int x;
      cin>>x;
      if(check(x)) flag=0;
      if(flag) r++;
      g++;
    }
    printf("BINGO after %d numbers announced\n",r);
  }
  return 0;
}
