#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define nf cout << '\n'
#define int long long
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()

void solve() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n + 2);
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        a[u]++;
        a[v]++;
    }
    int cnt = count(a.begin(), a.end(), 1);
    cout << n - cnt - 1 << ' ' << (cnt) / (n - cnt - 1) << nl;
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