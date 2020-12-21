#include <bits/stdc++.h>
using namespace std;
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  while(true){
    int h,m;
    char c;
    cin>>h>>c>>m;
    if(h==0 && m==0) break;
    printf("%.3f\n",min(360-abs(30*h-5.5*m),abs(30*h-5.5*m)));
  }
  return 0;
}