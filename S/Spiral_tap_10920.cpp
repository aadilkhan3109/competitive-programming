#include <bits/stdc++.h>
using namespace std;
int main(){
  long long s,p;
  while(cin>>s>>p && (s!=0 && p!=0)){
    long long x=ceil((float)s/2),y=x,n,m=0,dir=0,cal;
    n=floor(sqrt(p));
    if(n%2==0){
      x+=((n-1)/2);
      cal=pow(n+1,2);
      n=pow(n-1,2);
    }else {
      x+=(n/2);
      cal=pow(n+1,2);
      n=pow(n,2);
    }
    y=x;
    if(n!=p)n++,y++,dir=1,m=sqrt(n);
    while (n<=cal){
      if(n==p) break;
      if(dir==0){
        int h=++m;
        while(h--){
          if(n==p)break;
          n++,y++;
        }
        dir=1;
      }
      else if(dir==1){
        int h=m;
        while(h--){
          if(n==p)break;
          n++,x--;
        }
        dir = 2;
      }else if(dir==2){
        int h=++m;
        while(h--){
          if(n==p)break;
          n++,y--;
        }
        dir = 3;
      }else if(dir==3){
        int h=m;
        while(h--){
          if(n==p)break;
          n++,x++;
        }
        dir = 0;
      }
      if(n==p)break;
    }
    printf("Line = %d, column = %d.\n",y,x);
  }
  return 0;
}