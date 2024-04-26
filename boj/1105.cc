#include <bits/stdc++.h>
using namespace std;

int main() {
    string a,b;
    cin>>a>>b;
    int n = a.length(), m = b.length(), i = 0, j = 0, ans = 0;
    if (n != m) {
        cout<<ans<<endl;
        return 0;
    }
    while (i < n and j < m and a[i] == b[j]) {
        ans+= (a[i] == '8' and b[j] == '8');
        i++;
        j++;
    }
    cout<<ans<<endl;
}