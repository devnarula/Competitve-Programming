#include <bits/stdc++.h>
using namespace std;

int a[505][505];
int n, m, b;
int f(int h, int bx) {
    int t = 0;
    for (int i = 0; i<n; i++) {
        for (int j = 0; j<m; j++) {
            if (a[i][j] > h) {
                bx += a[i][j] - h;
                t += 2 * (a[i][j] - h);

            }
        }
    }
    for (int i = 0; i<n; i++) {
        for (int j = 0; j<m; j++) {
            if (a[i][j] < h and bx < (h - a[i][j])) return -1;
            else if (a[i][j] < h) {
                bx -= (h - a[i][j]);
                t += (h - a[i][j]);
            }
        }
    }
    if (bx < 0) return -1;
    return t;
}
int main() {
    cin>>n>>m>>b;
    for (int i = 0; i<n; i++) {
        for (int j = 0; j<m; j++) {
            cin>>a[i][j];
        }
    }
    int l = 0, r = 256, t = INT_MAX, h = -1;
    for (int i = r; i >= l; i--) {
        int val = f(i,b);
        if (val != -1 and val < t) {
            h = i;
            t = val;
        }
    }
    cout<<t<<" "<<h<<endl;
}