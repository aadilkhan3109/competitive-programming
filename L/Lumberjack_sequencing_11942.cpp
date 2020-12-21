#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    cout<<"Lumberjacks:"<<endl;
    while(t--){
        bool is = true;
        int b[10];
        for(int i =0;i<10;i++)cin>>b[i];
        int i=0;
        while(i<9 && b[i]>=b[i+1])i++;
        if(i<9) is =false;
        if(!is){
            i=0;
            while(i<9 && b[i]<=b[i+1])i++;
            if(i==9) is = true;
        }
        if(is)cout<<"Ordered"<<endl;
        else cout<<"Unordered"<<endl;
    }
    return 0;
}