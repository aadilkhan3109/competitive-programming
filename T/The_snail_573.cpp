#include <bits/stdc++.h>
using namespace std;
int main(){
    double h,u,d,f,ih=0;
    int da=0;
    while(true){
        cin>>h>>u>>d>>f;
        ih = 0;
        da= 0;
        if(h==0)break;
        f=u/100*f;
        while(ih<=h && ih>=0){
            ih+=max(u-da*f,0.0);
            da++;
            if(ih>h)break;
            ih-=d;
        }
        if(ih<0)cout<<"failure on day "<<da<<endl;
        else cout<<"success on day "<<da<<endl;
    }
}