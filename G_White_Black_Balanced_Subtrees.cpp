#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define nf cout << '\n'
#define ll long long
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> adj;
string s;
int ans;

int dfs(int u) {
    int sum;
    if (s[u - 1] == 'W')
        sum = 1;
    else
        sum = -1;

    for (int v : adj[u]) {
        sum += dfs(v);
    }
    if (sum == 0) {
        ans++;
    }
    return sum;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        adj.assign(n + 1, {});
        for (int i = 2; i <= n; i++) {
            int p;
            cin >> p;
            adj[p].push_back(i);
        }
        cin >> s;
        ans = 0;
        dfs(1);
        cout << ans << endl;
    }
    return 0;
}