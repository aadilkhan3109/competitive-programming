#include <bits/stdc++.h>
using namespace std;

int main(){
  char c;
  ios::sync_with_stdio(0),cin.tie(0);
  while(cin>>c && c!='0'){
    cin.putback(c);
    int t,ar[105],loc[105]={0},k=0,mi=0XFFFFFFF,in=0;
    while(cin>>t && t!=0){
      ar[k++] = t;
      if(mi>t){
        mi=t;
        in=k-1;
      }
    }
    int mx=-1;
    bool flag=true;
    while(mx<=18000 && flag){
      loc[in]+=2*ar[in];

      for(int i=0;i<k;i++)
        while((loc[i]+ar[i]-5)<loc[in])loc[i]+=2*ar[i];

      for(int i=0;i<k;i++)
        if(mx<loc[i]) mx=loc[i];
      
      for(int i=0;i<k && flag;i++)
        if((loc[i]+ar[i]-5)<=mx) flag=false;
      flag=!flag;
    }
    if(mx>18000) printf("Signals fail to synchronise in 5 hours\n");
    else printf("%02d:%02d:%02d\n",(mx/3600)%60,(mx/60)%60,mx%60);
  }
}