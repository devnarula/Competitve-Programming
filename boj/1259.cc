#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;
    while (s != "0") {
        int p = 1;
        for (int i = 0; i<s.length()/2; i++) {
            if (s[i] != s[s.length() - i - 1]) p = 0;
        }
        cout<<(p ? "yes\n" : "no\n");
        cin>>s;
    }
}