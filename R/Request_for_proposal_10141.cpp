#include <bits/stdc++.h>
using namespace std;
int main(){
    
    int rf = 1,hh=0;
    while(true){
        int n,p,r;
        double d,max=0,dmax=0;
        string s,name,nmax;
        cin>>n>>p;
        if (n==0 && p==0)break;
        if(hh++)cout<<endl;
        getline(cin,s);
        for (int i = 0; i < n; i++)
            getline(cin,s);
        for (int i = 0; i < p; i++) {
            getline(cin,name);
            cin>>d>>r;
            if(max<(double)r/p){
                max = (double)r/p;
                nmax = name;
                dmax = d;
            }else if(max==(double)r/p &&d<dmax){
                max = (double)r/p;
                nmax = name;
                dmax = d;
            }
            getline(cin,s);
            for (int i = 0; i < r; i++) getline(cin,s);
        }
        printf("RFP #%d\n",rf++);
        cout<<nmax<<endl;
    }
}