#include <bits/stdc++.h>
using namespace std;

char lo(char a){
  if(a>='A' && a <= 'Z') return (a-'A')+'a';
  else return a;
}
int main(){
  string s;
  while (true){
    getline(cin, s);
    if (s == "DONE") break;
    string t = "";
    int l = 0;
    for (int i = 0; i < s.size(); i++) if (isalpha(s[i])) t += s[i];
    // cout<<t<<endl;
    for (int i = 0; i < t.size()/2; i++) {
      if (lo(t[i]) == lo(t[(t.size() - 1) - i])){
        // cout<<t[i]<<" "<<t[(t.size() - 1) - i]<<endl;
        l++;
      }
      else{
        cout << "Uh oh.." << endl;
        break;
      }
    }
    // cout<<l<<" "<<t.size()/2<<endl;
    if (l == t.size() / 2)
      cout << "You won't be eaten!" << endl;
  }
  return 0;
}