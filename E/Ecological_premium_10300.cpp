#include <bits/stdc++.h>

using namespace std;
int main(){
    int sum,t,f;
    cin>>t;
    while(t--){
        cin>>f;
        sum = 0;
        while (f--){
            int a,b,c;
            cin>>a>>b>>c;
            sum+=(a*c);
        }
        cout<<sum<<endl;
    }

}