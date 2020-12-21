#include <bits/stdc++.h>
using namespace std;

int main(){
    string line;
    bool f = true;
    while(getline(cin,line)){
        string nl;
        for (int i = 0; i < line.length(); ++i) {
            if(f && line[i]=='"'){
                nl+="``";
                f = false;
            }else {
                if(line[i]=='"'){
                    nl +="''";
                    f = true;}
                else  nl+=line[i];
            }
        }
        cout<<nl<<endl;
    }
    return 0;
}