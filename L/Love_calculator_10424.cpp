#include <bits/stdc++.h>
using namespace std;

int main(){
    
    string fn,sn;
    while(getline(cin,fn)){
        int f=0,s=0,t;
        getline(cin,sn);
        for(int i=0; i<fn.length();i++){
            if(fn[i]>='a' && fn[i]<='z')
                f+=(fn[i]-'a'+1);
            else if(fn[i]>='A' && fn[i]<='Z')
                f+=(fn[i]-'A'+1);
        }
        for (int i = 0; i < sn.length(); ++i) {
            if(sn[i]>='a' && sn[i]<='z')
                s+=(sn[i]-'a'+1);
            else if(sn[i]>='A' && sn[i]<='Z')
                s+=(sn[i]-'A'+1);
        }
        while(f>9){
            t =0;
            while(f>0){
                t+=f%10;
                f/=10;
            }
            f=t;
        }
        while(s>9){
            t =0;
            while(s>0){
                t+=s%10;
                s/=10;
            }
            s=t;
        }
        if(f<s)
            printf("%.2f %\n",((double)100*f/s));
        else
            printf("%.2f %\n",((double)100*s/f));
    }

}

