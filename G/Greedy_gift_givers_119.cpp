#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    scanf("%d",&n);
    while (1) {
        map<string,int> map;
        string s[n], tem;
        int r, hh, h = n;
        for (int i = 0; i < n; i++) {
            cin >> s[i];
            map[s[i]] = 0;
        }
        while (h--) {
            cin >> tem >> r >> hh;
            if (hh != 0) {
                r /= hh;
                map[tem] -= r*hh;
                while (hh--) {
                    cin >> tem;
                    map[tem] += r;
                }
            }
        }
        for (int i = 0; i < n; i++) cout << s[i] << " " << map[s[i]] << endl;
        if(scanf("%d",&n)!=EOF) cout<<endl;
        else break;
    }
    return 0;
}