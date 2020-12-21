#include <bits/stdc++.h>
using namespace std;
int main(){
    int t,c = 1;
    cin>>t;
    while(t--){
        int i =3;
        int s[3];
        while(i--) cin>>s[i];
        sort(s,s+3);
        printf("%s %d: %d\n","Case",c++,s[1]);
    }
}