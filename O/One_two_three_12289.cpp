#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    string w;
    cin>>t;
    while(t--){
        cin>>w;
        if(w.length()==5)cout<<3<<endl;
        else{
            int x = 0;
            if(w[0]=='o')x++;
            if(w[1]=='n')x++;
            if(w[2]=='e')x++;
            if(x>=2)cout<<1<<endl;
            else cout<<2<<endl;
        }
    }
    return 0;
}