#include <bits/stdc++.h>
using namespace std;
int n,m;
void solve(vector<string> a,vector<string> b) {
    int ans = 0;
    for (int i = 0; i<n; i++) {
        for (int j = 0; j<m; j++) {
            if (a[i][j] != b[i][j]) {
                if (i + 3 > n or j + 3 > m) {
                    cout<<-1<<endl;
                    return;
                }
                ans++;
                for (int k = 0; k<3; k++) {
                    for (int l = 0; l<3; l++) {
                        a[i+k][j+l] = ((a[i+k][j+l] - '0') ^ 1) + '0';
                    }
                }
            }
        }
    }
    cout<<ans<<endl;
} 
int main() {
    cin>>n>>m;
    vector<string> a(n),b(n);
    for (int i = 0; i<n; i++) cin>>a[i]; 
    for (int i = 0; i<n; i++) cin>>b[i];
    solve(a,b); 
}