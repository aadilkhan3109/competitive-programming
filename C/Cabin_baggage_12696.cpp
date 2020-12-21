#include <bits/stdc++.h>
using namespace std;
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t, tot = 0;
  cin >> t;
  while (t--){
    float l, h, d, w;
    cin >> l >> h >> d >> w;
    if (w <= 7.00){
      if ((l <= 56 && h <= 45 && d <= 25) || (h + l + d <= 125)){
        cout << 1 << endl;
        tot++;
      }
      else
        cout << 0 << endl;
    }
    else
      cout << 0 << endl;
  }
  cout << tot << endl;
  return 0;
}