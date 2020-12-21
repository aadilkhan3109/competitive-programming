#include <bits/stdc++.h>

using namespace std;

int main() {
    
    while(true){
        int s,b,l,r;
        cin>>s>>b;
        if(s==0&& b==0)break;
        int ri[s+1],le[s+1];
        for(int i=1;i<=s;i++){
            le[i]=i-1;
            ri[i]=i+1;
        }
        for(int i=0;i<b;i++){
            cin>>l>>r;
            le[ri[r]]=le[l];
            if(le[l]<1)printf("* ");
            else printf("%d ",le[l]);
            
            ri[le[l]]=ri[r];
            if(ri[r]>s)printf("*\n");
            else printf("%d\n",ri[r]);
            
        }
        printf("-\n");
    }

    return 0;
}