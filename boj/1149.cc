#include <bits/stdc++.h>
using namespace std;

int cr = 0, cg = 0, cb = 0;
int main() {
    int n;
    cin>>n;
    for (int i = 0; i<n; i++) {
        int r,g,b;
        cin>>r>>g>>b;
        int or_ = cr, og_ = cg, ob_ = cb;
        cr = min(og_,ob_) + r;
        cg = min(or_,ob_) + g;
        cb = min(or_,og_) + b;
    }
    cout<<min({cr,cg,cb})<<endl;
}