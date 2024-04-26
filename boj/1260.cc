#include <bits/stdc++.h>
using namespace std;

int n,m,s;
vector<int> adj[1005];
int vis[1005], vis1[1005];
void dfs(int u) {
    cout<<u<<" ";
    for (auto x: adj[u]) {
        if (!vis[x]) {
            vis[x] = 1;
            dfs(x);
        }
    }
}
int main() {
    cin>>n>>m>>s;
    for (int i = 0; i<m; i++) {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for (int i = 1; i<=n; i++) {
        if (adj[i].size()) sort(adj[i].begin(),adj[i].end());
    }
    vis[s] = 1;
    vis1[s] = 1;
    dfs(s);
    cout<<endl;
    queue<int> q;
    q.push(s);
    while (!q.empty()) {
        cout<<q.front()<<" ";
        int u = q.front();
        q.pop();
        for (auto v: adj[u]) {
            if (!vis1[v]) {
                vis1[v] = 1;
                q.push(v);
            }
        }
    }
    cout<<endl;
}