#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    map<string,int> mp;
    vector<string> ans;
    for (int i = 0; i<n; i++) {
        string word;
        cin>>word;
        if (mp.count(word)) continue;
        mp[word] = 1;
        ans.push_back(word);
    }
    sort(ans.begin(),ans.end(), [](const string &a, const string &b) {
        if (a.length() != b.length()) return a.length() < b.length();
        else return a < b;
    });
    for (auto val: ans) cout<<val<<endl;
}