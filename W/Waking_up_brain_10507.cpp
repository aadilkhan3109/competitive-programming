#include <bits/stdc++.h>
using namespace std;
int g[26][26]={0};
bool is(vector<int> w,int ni[],bool no[],int &y,int n){
	vector<int> ww;
	if(!n) return true;
	for(int i:w){
		for(int j=0;j<26;j++){
			if(no[j]){
				if(g[j][i]) ni[j]++;
				if(ni[j]>=3) ww.push_back(j),no[j]=0,--n;
			}
		}
	}
	if(ww.size()==0) return false;
	return is(ww,ni,no,++y,n);
}

int main(){
  ios::sync_with_stdio(0),cin.tie(0);
  int n,m;
  while(cin>>n>>m){
    string l;
    cin>>l;
		vector<int> w;
		w.push_back(l[0]-'A'),w.push_back(l[1]-'A'),w.push_back(l[2]-'A');
		int ni[26]={0},y=0;
		bool wa[26]={0},no[26]={0};
		wa[l[0]-'A']=wa[l[1]-'A']=wa[l[2]-'A']=1;
    for(int i=0;i<m;i++){
      cin>>l;
      g[l[0]-'A'][l[1]-'A']=g[l[1]-'A'][l[0]-'A']=1;
			if(!wa[l[0]-'A']) no[l[0]-'A']=1;
			if(!wa[l[1]-'A']) no[l[1]-'A']=1;
    }
    if(!m){
      if(n==3)printf("WAKE UP IN, 0, YEARS\n");
      else printf("THIS BRAIN NEVER WAKES UP\n");
    }else {
      if(is(w,ni,no,y,n-3)){
        printf("WAKE UP IN, %d, YEARS\n",y);
      }else printf("THIS BRAIN NEVER WAKES UP\n");
    }
		for(int i=0;i<26;i++)
			for(int j=0;j<26;j++)
				g[i][j]=0;
  }
}