#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    double ans = 0, mx = 0;
    for (int i = 0; i<n; i++) {
        double x;
        cin>>x;
        ans += x;
        mx = max(mx,x);
    }
    ans = (ans/(mx*n)*100.0);
    cout<<setprecision(5)<<ans<<endl;
}