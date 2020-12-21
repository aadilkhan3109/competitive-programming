#include <bits/stdc++.h>
using namespace std;

void print(int sheet,string s,string first, string second){
  printf("Sheet %d, %s: %s, %s\n",sheet,s.c_str(),first.c_str(),second.c_str());
}

int main(){
  int t;
  while(cin>>t && t!=0){
    int n=ceil((float)t/4),ff=0,fs=0,bf=0,bs=0;
    printf("Printing order for %d pages:\n",t);
    for(int i=1;i<=n;i++){
      ff=2*(2*n-i+1);
      fs=2*i-1;
      bf=2*i;
      bs=2*(2*n-i+1)-1;
      if(ff<=t || fs<=t){
        string a,b;
        ff>t ? a = "Blank":a = to_string(ff);
        fs>t ? b = "Blank":b = to_string(fs);
        print(i,"front",a,b);
      }
      if(bf<=t || bs<=t){
        string a,b;
        bf>t ? a = "Blank":a = to_string(bf);
        bs>t ? b = "Blank":b = to_string(bs);
        print(i,"back ",a,b);
      }
    }
  }
}