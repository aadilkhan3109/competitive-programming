#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,c=1;
    cin>>n;
    while(n){
        int t,r=0;
        for(int i=0;i<n;i++){
            cin>>t;
            if(t)r++;
            else r--;
        }
        printf("%s %d: %d\n","Case",c++,r);
        cin>>n;
    }
}