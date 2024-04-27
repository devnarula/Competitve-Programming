#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    cin>>n>>m;
    vector<string> v(n);
    for (int i = 0; i<n; i++) cin>>v[i];
    int ans = INT_MAX;
    for (int i = 0; i<n-7; i++) {
        for (int j = 0; j<m-7; j++) {
            int c1 = 0, c2 = 0;
            for (int k = 0; k < 8; k++) {
                for (int l = 0; l<8; l++) {
                    if (((i+k+j+l)%2 == 0 and v[i+k][j+l] != 'B') or ((i+k+j+l)%2 == 1 and v[i+k][j+l] != 'W')) {
                        c1++;
                    }
                    if (((i+k+j+l)%2 == 0 and v[i+k][j+l] != 'W') or ((i+k+j+l)%2 == 1 and v[i+k][j+l] != 'B')) {
                        c2++;
                    }
                }
            }
            ans = min(ans,min(c1,c2));
        }
    }
    cout<<ans<<endl;
}