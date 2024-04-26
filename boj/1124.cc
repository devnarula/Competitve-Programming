#include <bits/stdc++.h>
#define maxn 100005
using namespace std;

vector<int> prime(maxn,1), pcount(maxn,0);
void sieve() {
    prime[0] = 0;
    prime[1] = 0;
    for (int i = 2; i < maxn; i++) {
        if (prime[i]) {
            for (int j = i+i; j < maxn; j += i) {
                prime[j] = 0;
                int y = j;
                while (y % i == 0) {
                    pcount[j]++;
                    y /= i;
                }
            }
        }
    }
}
int main() {
    int a,b;
    cin>>a>>b;
    sieve();
    int ans = 0;
    for (int i = a; i<=b; i++) {
        ans += prime[pcount[i]];
    }
    cout<<ans<<endl;
}