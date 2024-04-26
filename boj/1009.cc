#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        int a, b;
        cin>>a>>b;
        int p = 1;
        for (int i = 0; i<b; i++) p = (p%10 * a%10)%10;
        if (!p) p = 10;
        cout<<p<<endl;
    }
}