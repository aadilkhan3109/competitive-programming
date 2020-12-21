#include <bits/stdc++.h>
using namespace std;

int main(){
    while (true){
        int m,o,tm=0;
        double dp,l,cc,r[101];
        cin>>m>>dp>>l>>o;
        if(m<0)break;
        while(o--){
            int mm;
            double rr;
            cin>>mm>>rr;
            for (int i = mm; i < 101; ++i) r[i]=rr;
        }
        cc=((l+dp)-(l+dp)*r[0]);
        dp = l/m;
        while(cc<l){
            l-=dp;
            cc-=(cc*r[++tm]);
        }
        cout<<tm<<" month";
        if(tm != 1)cout<<"s";
        cout<<endl;
    }
    return 0;
}