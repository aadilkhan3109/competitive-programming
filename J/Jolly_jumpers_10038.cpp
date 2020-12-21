#include <bits/stdc++.h>
using namespace std;
int main(){
    
    int n;
    while (scanf("%d",&n)!=EOF){
        int is=1;
        int a[n],b[3001]={0};
        for(int i=0;i<n;i++) cin>>a[i];
        for(int j=1;j<n;j++)
            if(abs(a[j]-a[j-1])<n)
                b[abs(a[j]-a[j-1])]++;
        for(int i =1;i<n;i++)
            if(b[i]==0) is=0;

        if(is)printf("Jolly\n");
        else printf("Not jolly\n");
    }
    
}



/*





*/