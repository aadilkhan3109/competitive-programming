#include <bits/stdc++.h>
using namespace std;
int main(){
    int t,c=1;
    cin>>t;
    while(t--){
        int l,w,h;
        cin>>l>>w>>h;
        if((l<=20)&&(w<=20)&&(h<=20))printf("%s %d: %s\n","Case",c++,"good");
        else printf("%s %d: %s\n","Case",c++,"bad");
    }
    return 0;
}