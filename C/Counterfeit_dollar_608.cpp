#include <bits/stdc++.h>
using namespace std;

void full(int *a,string b){
  for(int i=0;i<b.size();i++)
    a[b[i]]++;
}

bool iso(int *a,string b){
  for(int i=0;i<b.size();i++){
    if(a[b[i]]==0) return false;
  }
  return true;
}
string fmsh(int *a,string b){
  string res="";
  for(int i=0;i<b.size();i++) 
    if(a[b[i]]!=1) res+=b[i];
  return res;
}

int main(){
  int t;
  cin>>t;
  while(t--){
    int he[128]={0},li[128]={0},even[128]={0},f=-1,mx=-1;
    char res;
    string hev="",lig="";
    for(int i=0;i<3;i++){
      string a,b,c;
      cin>>a>>b>>c;
      if(c=="even") full(even,a+b);
      else if(c=="up"){
        full(he,a);
        full(li,b);
        hev+=a;
        lig+=b;
      }
      else if(c=="down"){
        full(he,b);
        full(li,a);
        hev+=b;
        lig+=a;
      }
    }
    for(int i=0;i<128;i++){
      if(he[i]>mx) mx=he[i];
      if(li[i]>mx) mx=li[i];
    }
    string ms="";
    for(int i=0;i<128;i++){
      if(he[i]==mx) ms+=i;
      if(li[i]==mx) ms+=i;
    }
    for(int i=0;i<ms.size();i++){
      if(even[ms[i]]==0){
        res=ms[i];
        break;
      }
    }

    for(int i=0;i<hev.size();i++){
      if(hev[i]==res) {
        f=1;
        break;
      }
      if(lig[i]==res){
        f=0;
        break;
      }
    }
    if(f==1) printf("%c is the counterfeit coin and it is heavy.\n",res);
    else if(f==0) printf("%c is the counterfeit coin and it is light.\n",res);
  }

  return 0;
}