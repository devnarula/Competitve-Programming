#include <bits/stdc++.h>
using namespace std;

vector<pair<int,int>> v;
int main() {
    string s;
    cin>>s;
    for (int i = 0; i<26; i++) v.push_back({0,i});
    for (auto c: s) v[tolower(c) - 'a'].first++;
    sort(v.begin(),v.end(),[](const pair<int,int>& a, const pair<int,int>& b) {return a.first > b.first;});
    if (v.size() > 1 and v[0].first == v[1].first) cout<<"?\n";
    else cout<<static_cast<char>(v[0].second+'A')<<endl;
}