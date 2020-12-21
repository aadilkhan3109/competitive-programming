#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, b, h, w, p, mc = 1e9;
    while(scanf("%d%d%d%d",&n,&b,&h,&w) != EOF){
        for (int i = 0; i < h; i++) {
            int a[w];
            cin >> p;
            for (int j = 0; j < w; j++)cin >> a[j];
            int j = 0;
            while (j < w) {
                if (a[j] >= n){
                    int t = p * n;
                    if (mc > t) mc = t;
                    break;
                }
                j++;
            }
        }
        if (mc <= b)cout << mc << endl;
        else cout << "stay home" << endl;
        mc = 1e9;
    }
    return 0;
}