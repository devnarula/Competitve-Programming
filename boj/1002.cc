#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        int x1,y1,x2,y2,r1,r2;
        cin>>x1>>y1>>r1>>x2>>y2>>r2;
        double dist = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
        if (r1 == r2 and x1 == x2 and y1 == y2) cout<<-1<<endl;
        else if (max(r1-r2,r2-r1) == dist) cout<<1<<endl;
        else if (dist < max(r1-r2,r2-r1)) cout<<0<<endl;
        else if (dist < r1+r2) cout<<2<<endl;
        else if (dist == r1+r2) cout<<1<<endl;
        else cout<<0<<endl;
    }


}