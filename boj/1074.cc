#include <bits/stdc++.h>
using namespace std;


int g[2][2] = {{0,1},{2,3}};
int f(int nn, int s, int cr, int cc) {
    long long d = (1LL <<nn);
    if (d == 2) {
        return g[cr-1][cc-1]+s;
    }
    if (cr <= d/2 and cc <= d/2) {
        return f(nn-1,s,cr,cc);
    }
    if (cr <= d/2 and cc > d/2) return f(nn-1,s+(1LL<<(2*nn-2)),cr,cc-d/2);
    if (cr > d/2 and cc <= d/2) return f(nn-1,s+(1LL<<(2*nn-1)),cr-d/2,cc);
    if (cr > d/2 and cc > d/2) return f(nn-1,s+3*(1LL<<(2*nn-2)),cr-d/2,cc-d/2);
    return 0;
}
int main() {
    int n,r,c;
    cin>>n>>r>>c;
    cout<<f(n, 0, r+1, c+1)<<endl;
}