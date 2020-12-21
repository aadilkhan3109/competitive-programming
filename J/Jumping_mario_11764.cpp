#include <bits/stdc++.h>
using namespace std;
int main(){
    int t,c=1;
    cin>>t;
    while(t--){
        int h=0,l=0,f,s,n;
        cin>>n;
        cin>>f;
        n--;
        while(n--){
            cin>>s;
            if(f>s)l++;
            if(s>f)h++;
            f = s;
        }
        printf("Case %d: %d %d\n",c++,h,l);
    }
    return 0;
}