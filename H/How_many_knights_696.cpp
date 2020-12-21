#include <bits/stdc++.h>
using namespace std;
void pr(int quantity,int row,int column){
  printf("%d knights may be placed on a %d row %d column board.\n",quantity,row,column);
}
int main(){
  float m,n;
  while(true){

    cin>>m>>n;
    if(m==0 && n==0) break;

    if(m ==0 || n==0)pr(0,m,n);
    else if(m==1 || n ==1) pr(max(m,n),m,n);
    else if(m==2 || n ==2) {
      if((int)max(m,n)%2==0) pr(ceil((max(m,n)/2)/2)*4,m,n);
      else {
        if(((int)ceil(max(m,n)/2))%2!=0) pr(ceil(ceil(max(m,n)/2)/2)*4-2,m,n);
        else pr(ceil(ceil(max(m,n)/2)/2)*4,m,n);
      }
    }
    else pr(ceil((m*n)/2),m,n);
  }
  return 0;
}