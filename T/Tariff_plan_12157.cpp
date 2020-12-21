#include <bits/stdc++.h>
using namespace std;
int main(){
    int t,c=1;
    cin>>t;
    while(t--){
        int n,m=0,j=0;
        cin>>n;
        while (n--){
            int h;
            cin>>h;
            m+=(((int)(h/30)+1)*10);
            j+=(((int)(h/60)+1)*15);
        }
        if(m<j)printf("Case %d: Mile %d\n",c++,m);
        else if(m>j)printf("Case %d: Juice %d\n",c++,j);
        else printf("Case %d: Mile Juice %d\n",c++,m);
    }

}