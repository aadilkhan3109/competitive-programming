#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int c=1;
    cin>>s;
    while(s[0]!='*'){
        if(s[0]=='H')printf("Case %d: Hajj-e-Akbar\n",c++);
        else printf("Case %d: Hajj-e-Asghar\n",c++);
        cin>>s;
    }
}