#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, c = 0;
    cin>>n;
    string s = "666";
    if (!n) {
        cout<<s<<endl;
        return 0;
    }
    for (int i = 666;; i++) {
        int x = 0;
        s = to_string(i);
        for (int j = 0; j<s.length()-2; j++) {
            if (s[j] == s[j+1] and s[j+1] == s[j+2] and s[j] == '6') {
                x = 1;
                break;
            }
        }
        if (x) c++;
        if (c == n) {
            cout<<i<<endl;
            break;
        }
    }
}