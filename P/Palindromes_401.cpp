#include <bits/stdc++.h>
using namespace std;

bool rev(char a,char b){
  if(a=='A' && b=='A') return true;
  else if(a=='H' && b=='H') return true;
  else if(a=='I' && b=='I') return true;
  else if(a=='M' && b=='M') return true;
  else if(a=='O' && b=='O') return true;
  else if(a=='T' && b=='T') return true;
  else if(a=='U' && b=='U') return true;
  else if(a=='V' && b=='V') return true;
  else if(a=='W' && b=='W') return true;
  else if(a=='X' && b=='X') return true;
  else if(a=='Y' && b=='Y') return true;
  else if(a=='V' && b=='V') return true;
  else if(a=='1' && b=='1') return true;
  else if(a=='8' && b=='8') return true;
  else if((a=='E' && b=='3') || (a=='3' && b=='E')) return true;
  else if((a=='J' && b=='L') || (a=='L' && b=='J')) return true;
  else if((a=='S' && b=='2') || (a=='2' && b=='S')) return true;
  else if((a=='5' && b=='Z') || (a=='Z' && b=='5')) return true;
  else if((a=='E' && b=='3') || (a=='3' && b=='E')) return true;
  else return false;
}

int main(){
  string s;
  while(getline(cin,s)){
    bool r=rev(s[0],s[s.size()-1]),isp = false,isre=false;
    int re=0,pa=0;
    for(int i=0;i<s.size()/2;i++){
      if(r)
        if(rev(s[i],s[(s.size()-1)-i])){
          r = rev(s[i],s[(s.size()-1)-i]);
          re++;
        }
      if(s[i] == s[(s.size()-1)-i]) pa++;
    }
    if(re == s.size()/2 && pa == s.size()/2){
      if (s.size()%2==0) isp = isre =true;
      else {
        isre = rev(s[s.size()/2],s[s.size()/2]);
        isp = true;
      }
    }
    else if(re == s.size()/2){
      if (s.size()%2==0) isre =true;
      else {
        isre = rev(s[s.size()/2],s[s.size()/2]);
      }
    }
    else if(pa == s.size()/2) isp = true;
    
    if(isp && isre) printf("%s -- is a mirrored palindrome.\n",s.c_str());
    else if(isre) printf("%s -- is a mirrored string.\n",s.c_str());
    else if(isp) printf("%s -- is a regular palindrome.\n",s.c_str());
    else printf("%s -- is not a palindrome.\n",s.c_str());
    cout<<endl;
  }
}