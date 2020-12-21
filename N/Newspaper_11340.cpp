#include <bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;
    while(n--){
        int k,v,m;
        double res=0;
        char t;
        map<char,int> map;
        cin>>k;
        for(int i=0;i<k;i++){
            cin>>t>>v;
            map[t]=v;
        }
        string s;
        cin>>m;
        cin.ignore();
        for(int i=0;i<m;i++){
            getline(cin,s);
            int l=s.length();
            for(int j=0;j<l;j++)
                if(map.find(s[j])!=map.end())
                    res+=map[s[j]];

        }    
        printf("%.2F$\n",res/100);
    }
}