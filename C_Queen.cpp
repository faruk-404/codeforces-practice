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
    int n;
    cin >> n;
    int root = -1;
    vector<int> a(n + 1);
    vector<int> aa(n + 1);
    for (int i = 1; i <= n; i++) {
        int u, v;
        cin >> u >> v;
        if (u == -1) {
            root = u;
            a[i]++;
            continue;
        }
        if (v == 1) {
            aa[i]++;
            aa[u]++;
        }
        a[i]++;
        a[u]++;
    }
    int ans = -1;
    vector<int> an;
    for (int i = 1; i <= n; i++) {
        // cout << i <<"  "<<aa[i]<< " --> "<<a[i]<<nl;
        if (aa[i] == a[i]) {
            ans++, an.push_back(i);
        }
    }
    if (ans == -1)
        cout << -1 << nl;
    else
        for (auto i : an)
            cout << i << ' ';
    cout << '\n';
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}