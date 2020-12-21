#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    while (a||b||c||d){
        cout<<1080+9*((40+a-b)%40+(40+c-b)%40+(40+c-d)%40)<<endl;
        cin>>a>>b>>c>>d;
    }
    return 0;
}