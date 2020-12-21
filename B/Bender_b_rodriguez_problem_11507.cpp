#include <bits/stdc++.h>
using namespace std;
int main(){
    
    while(true){
        int n;
        string d="+x";
        cin>>n;
        if(n==0)break;
        n--;
        while(n--){
            string t;
            cin>>t;
            if(d=="+x"){
                if(t == "+y") d="+y";
                else if(t == "-y") d="-y";
                else if(t == "+z") d="+z";
                else if(t == "-z") d="-z";
            }
            else if(d=="-x"){
                if(t == "+y") d="-y";
                else if(t == "-y") d="+y";
                else if(t == "+z") d="-z";
                else if(t == "-z") d="+z";
            }
            else if(d=="+z"){
                if(t == "+y")d="+z";
                else if(t == "-y")d="+z";
                else if(t == "-z")d="+x";
                else if(t == "+z")d="-x";
            }
            else if(d=="-z"){
                if(t == "+y")d="-z";
                else if(t == "-y")d="-z";
                else if(t == "+z")d="+x";
                else if(t == "-z")d="-x";
            }
            else if(d=="+y"){
                if(t == "+z")d="+y";
                else if(t == "-z")d="+y";
                else if(t == "-y")d="+x";
                else if(t == "+y")d="-x";
            }
            else if(d=="-y"){
                if(t == "+z")d="-y";
                else if(t == "-z")d="-y";
                else if(t == "+y")d="+x";
                else if(t == "-y")d="-x";
            }
            
        }
        cout<<d<<endl;
    }
    return 0;
}