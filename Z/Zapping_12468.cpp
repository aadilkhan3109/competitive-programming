#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    while(true){
        cin>>a>>b;
        if(a==-1 && b == -1)break;
        if(abs(a-b)<50)printf("%d\n",abs(a-b));
        else{
            printf("%d\n",min(a,b)+(99-max(a,b))+1);
        }
    }
    return 0;
}