#include <bits/stdc++.h>
using namespace std;

int main(){
  int r;
  string w,g;
  while (true){
    cin>>r>>w>>g;
    if(r==-1) break;
    set<int> s,ss,sss;
    for(int i=0;i<w.size();i++)
      s.insert(w[i]);
    for(int i=0;i<g.size();i++){
      if((s.find(g[i])!=s.end())) ss.insert(g[i]);
      else sss.insert(g[i]);
      if(sss.size()>=7) break;
    }
    cout<<"Round "<<r<<endl;
    if (ss.size()==s.size()) printf("You win.\n");
    else if(sss.size()>=7){ printf("You lose.\n",r);}
    else printf("You chickened out.\n");
  }
  
}
