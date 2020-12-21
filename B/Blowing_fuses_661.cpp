#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m,c,ca=1;
    while (true){
        cin>>n>>m>>c;
        int nn[n],mm[m],nnn[n],max=0,r=0;
        bool b=false;
        if(n==0&&m==0&&c==0)break;
        for(int i=0;i<n;i++){
            nnn[i]=1;
            cin>>nn[i];
        }
        for(int i=0;i<m;i++)cin>>mm[i];
        for(int i=0;i<m;i++){
            if(nnn[mm[i]-1]){
                r+=nn[mm[i]-1];
                if(r>max)max=r;
                nnn[mm[i]-1]=0;
                if(r>c){
                    b = true;
                    break;
                }
            }else {
                r-=nn[mm[i]-1];
                nnn[mm[i]-1]=1;
            }
        }

        if(b) printf("Sequence %d\nFuse was blown.\n\n",ca++);
        else printf("Sequence %d\nFuse was not blown.\nMaximal power consumption was %d amperes.\n\n",ca++,max);
    }
    return 0;
}