#include <bits/stdc++.h>
using namespace std;
int main(){
  int m,n;
  while(cin>>m>>n){
    int mat[m][n];
    for(int i=0;i<m;i++)
      for(int j=0;j<n;j++)
        mat[i][j]=0;
    for(int j=0;j<m;j++){
      int r;
      cin>>r;
      int rarr[r],rn[r];
      for(int i=0;i<r;i++)
        cin>>rarr[i];
      for(int i=0;i<r;i++)
        cin>>rn[i];
      for(int i=0;i<r;i++)
        mat[j][rarr[i]-1]=rn[i];
    }
    int tra[n][m];
    for(int i=0;i<n;i++)
      for(int j=0;j<m;j++)
        tra[i][j]=mat[j][i];
    cout<<n<<" "<<m<<endl;
    for(int i=0;i<n;i++){
      vector<int> ind,num;
      for(int j=0;j<m;j++)
        if(tra[i][j]!=0){
          ind.push_back(j+1);
          num.push_back(tra[i][j]);
        }
      cout<<ind.size();
      for(int j=0;j<ind.size();j++)
        cout<<" "<<ind[j];
      cout<<endl;
      bool f=0;
      for(int j=0;j<num.size();j++){
        if(f) cout<<" ";
        cout<<num[j];
        f=1;
      }
      cout<<endl;
    }
  }

  return 0;
}