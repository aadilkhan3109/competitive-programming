#include <bits/stdc++.h>
using namespace std;
int main(){
    int t,s;
    cin>>t;
    while(t--){
        cin>>s;
        int min=1000000,max=-1,h;
        for(int i=0;i<s;i++){
            cin>>h;
            if(h>max) max=h;
            if(h<min) min=h;
        }
        cout<<(max-min)*2<<endl;
    }
    return 0;
}
