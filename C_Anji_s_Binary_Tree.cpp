#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define nf cout << '\n'
#define int long long
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
const int N = 3e5 + 9;
vector<int> g[N];
vector<int> op(N);
string s;

void dfs(int u) {
    if (g[u][0] != 0) {
        int node = g[u][0];
        if (s[u - 1] != 'L') {
            op[node] = op[u] + 1;

        } else {
            op[node] = op[u];
        }
        dfs(node);
    }
    if (g[u][1] != 0) {
        int node = g[u][1];
        if (s[u - 1] != 'R') {
            op[node] = op[u] + 1;

        } else {
            op[node] = op[u];
        }
        dfs(node);
    }
}

void solve() {
    int n;
    cin >> n;
    cin >> s;
    for (int i = 1; i <= n; i++) {
        g[i].clear();
        op[i] = 0;
    }

    for (int i = 1; i <= n; i++) {
        int u, v;
        cin >> u >> v;
        g[i].push_back(u);
        g[i].push_back(v);
    }
    dfs(1);
    int ans = LLONG_MAX;
    for (int i = 1; i <= n; i++) {
        if (g[i][0] == 0 && g[i][1] == 0) {
            ans = min(ans, op[i]);
        }
    }
    cout << ans << '\n';
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}