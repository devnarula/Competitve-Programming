#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    map<int,int> mp, mp1;
    vector<pair<int,int>> ans;
    for (int i = 0; i < n; i++) {
        int x;
        cin>>x;
        ans.push_back({x,i});
        mp[x]++;
        mp1[x]++;
    }
    for (int i = 0; i<n; i++) {
        int sum = 0;
        for (int j = 1; j<ans[i].first; j++) sum += mp1[j];
        ans[i].second = sum + mp1[ans[i].first] - mp[ans[i].first];
        mp[ans[i].first]--;
    }
    for (auto val: ans) {
        cout<<val.second<<" ";
    }
    cout<<endl;
}