#include <bits/stdc++.h>
using namespace std;

int main(){
  int l,w;
  while(cin>>w>>l&&(w!=0 && l!=0)){
    int res[5]={0};
    int m[w+2][l+2];
    for(int i=0;i<w+2;i++)
      for(int j=0;j<l+2;j++)
        m[i][j]=-1;

    for(int i=1;i<=w;i++){
      string h;
      cin>>h;
      for(int j=1;j<=l;j++){
        if(h[j-1]=='1'){
          m[i][j]=-1;
        }
        else m[i][j]=h[j-1]-'0';
      }
    }
    int x=w,y=1, dir=0;
    while (true){
      if(dir == 0 && m[x+1][y] != -1) dir =1;
      else if(dir == 1 && m[x][y-1] != -1) dir =2;
      else if (dir == 2 && m[x-1][y] != -1) dir = 3;
      else if (dir ==3 && m[x][y+1] != -1) dir =0;

      if(dir == 0){
        if(m[x][y+1] != -1){
          m[x][y]++;
          y++;
        }else if(m[x-1][y] != -1) dir = 3;
        else if(m[x][y-1] != -1) dir = 2;
      }
      else if (dir == 1){
        if(m[x+1][y] != -1){
          m[x][y]++;
          x++;
        }else if(m[x][y-1] != -1) dir = 0;
        else if(m[x-1][y] != -1) dir = 3;
      }else if(dir == 2){
        if(m[x][y-1] != -1){
          m[x][y]++;
          y--;
        }else if(m[x+1][y] != -1) dir = 1;
        else if(m[x][y+1] != -1) dir = 0;
      }
      else if ( dir == 3){
        if(m[x-1][y]!=-1){
          m[x][y]++;
          x--;
        }else if(m[x][y-1] != -1) dir = 2;
        else if (m[x+1][y] != -1) dir = 1;
      }
      if(x == w && y==1)break;
    }
    
    for (int i = 0; i<w+2; i++){
      for(int j =0;j<l+2;j++){
        if(m[i][j] != -1) res[m[i][j]]++;
      }
    }
    printf("%3d%3d%3d%3d%3d\n",res[0],res[1],res[2],res[3],res[4]);
  }
  

  return 0;
}