#include <bits/stdc++.h>
using namespace std;
int main(){
    
    int t,h;
    char c[2000];
    cin>>t;
    while(t--){
        scanf("%s",c);
        h=strlen(c);        
        if (strcmp(c, "1") == 0 || strcmp(c, "4") == 0 || strcmp(c, "78") == 0)
			cout<<"+"<<endl;
        else if(h>1 && c[h-1]=='5'&&c[h-2]=='3')
            cout<<"-"<<endl;
        else if(h>1 && c[0]=='9'&& c[h-1]=='4')
            cout<<"*"<<endl;
        else if(h>2 && c[0]=='1'&&c[1]=='9'&&c[2]=='0')
            cout<<"?"<<endl;
        else 
            cout<<"?"<<endl;
    }
    return 0;
}