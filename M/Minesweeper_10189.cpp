#include <bits/stdc++.h>
using namespace std;
int main(){
  int m,n,ca=1;
  while(cin>>m>>n && ( m!=0 && n!=0)){
    int arr[m][n];
    if(ca!=1) cout<<endl;
    for(int i=0; i<m;i++){
      for(int j=0;j<n;j++){
        arr[i][j]=0;
      }
    }
    string t;
    for(int i=0; i<m;i++){
      cin>>t;
      for(int j=0;j<t.size();j++){
        if(t[j]=='*'){
          arr[i][j] = -1e9;
          if(i-1>=0) arr[i-1][j]++;
          if(i+1<m) arr[i+1][j]++;
          if(j-1>=0) arr[i][j-1]++;
          if(j+1<n) arr[i][j+1]++;
          if(i-1>=0 && j-1>=0) arr[i-1][j-1]++;
          if(i-1>=0 && j+1<n) arr[i-1][j+1]++;
          if(i+1<m && j-1>=0) arr[i+1][j-1]++;
          if(i+1<m && j+1<n) arr[i+1][j+1]++;
        }
      }
    }
    cout<<"Field #"<<ca++<<":"<<endl;
    for(int i=0; i<m;i++){
      for(int j=0;j<n;j++){
        if(arr[i][j]<0)cout<<"*";
        else cout<<arr[i][j];
      }
      cout<<endl;
    }
  }

  return 0;
}