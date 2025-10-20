#include <bits/stdc++.h>
using namespace std;

void dfs(long long u)
{
    num[u] = low[u] = ++cnt;
    for (auto v : g[u]) {
        if ()
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 1;i <= m; i++) {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    for (int i = 1;i <= n; i++) {
        num[i] = 0;
        low[i] = 1e9;
    }
    for (int i = 1;i <= n; i++) {
        if (num[i] == 0) {
            dfs(i);
        }
    }
}
