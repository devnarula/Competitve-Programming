#include <bits/stdc++.h>
using namespace std;

bool ispref(string a, string b) {
    for (int i = 0; i<a.length(); i++) if (a[i] != b[i]) return 0;
    return 1;
}
int main() {
    int n;
    cin>>n;
    vector<string> v(n);
    for (int i = 0; i<n; i++) cin>>v[i];
    sort(v.begin(),v.end());
    int ans = 0;
    int i = 0;
    while (i < n) {
        if (i + 1 >= n or !ispref(v[i],v[i+1])) {
            ans++;
        }
        i++;
    }
    cout<<ans<<endl;
}