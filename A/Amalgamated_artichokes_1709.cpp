#include <bits/stdc++.h>
using namespace std;
int main(){
   int p,a,b,c,d,n;
   while(scanf("%d %d %d %d %d %d",&p,&a,&b,&c,&d,&n)!=EOF){
      double h,hh,m=-1e9;
      h = p*(sin(a+b)+cos(c+d)+2);
      for(int i=2;i<=n;i++){
         hh=p*(sin(a*i+b)+cos(c*i+d)+2);
         if(h-hh>m) m = h-hh;
         if(h<hh)h=hh;
      }
      if(m<=0) cout<<"0.00"<<endl;
      else printf("%.6f\n",m);
   }
   return 0;
}