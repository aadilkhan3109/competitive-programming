#include <bits/stdc++.h>
using namespace std;
int main(){
  int c=1,n, s = 0;
  while((cin>>n) && (n!=0)){
    int tm=0, sum=0;
    for(int i=0;i<n;i++){
      cin>>tm;
      sum+=tm;
    }
    if(sum%n==0){
      if(sum<0)printf("Case %d:\n- %d\n",c++,abs(sum/n));
      else printf("Case %d:\n%d\n",c++,abs(sum/n));
    }
    else {
      tm = abs(__gcd(sum,n));
      string l1="",l2="",l3="";
      int x = sum/tm, y = n/tm,r=0,ss=0;
      if(abs(x)<abs(y)){
        if (x<0){
          l1=l3="  ";
          l2 = "- ";
        }
        ss = log10(abs(y));
        l2+=string(ss+1,'-');
        l1+=string(ss,' ');
        cout<<"Case "<<c++<<":"<<endl;
        cout<<l1<<abs(x)<<endl;
        cout<<l2<<endl;
        cout<<l3<<abs(y)<<endl;
      }
      else {
        r = (x/y);
        x=abs(x%y);
        if(r<0){
          l1=l3="  ";
          l2="- ";
        } 
        l2+=to_string(abs(r));
        l1 += string((int)log10(abs(r))+1,' ');
        l3 += string((int)log10(abs(r))+1,' ');
        l1 += string((int)log10(abs(y))-(int)log10(abs(x)),' ');
        l2 += string((int)log10(abs(y))+1,'-');
        cout<<"Case "<<c++<<":"<<endl;
        cout<<l1<<x<<endl;
        cout<<l2<<endl;
        cout<<l3<<y<<endl;
      }
    }
  }
  return 0;
}