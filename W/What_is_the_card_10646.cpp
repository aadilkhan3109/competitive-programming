#include <bits/stdc++.h>
using namespace std;

int main(){
  int t,c=1;
  cin>>t;
  while(t){
    string arr[52];
    for(int i=0;i<52;i++) cin>>arr[i];
    int y=0,l=26;
    for(int i=0;i<3;i++){
      int x=0;
      if(isdigit(arr[l][0])) x=(arr[l][0]-'0');
      else x=10;
      l--;
      l-=(10-x);
      y+=x;
    }
    if(y<=l) printf("Case %d: %s\n",c++,arr[y-1].c_str());
    else {
      int s =y+(26-l);
      printf("Case %d: %s\n",c++,arr[s-1].c_str());
    }
    t--;
  }
  return 0;
}