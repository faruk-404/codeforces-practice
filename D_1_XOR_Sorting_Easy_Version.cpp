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
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    for (auto &i : a)
        cin >> i;
    if (is_sorted(all(a))) {
        cout << 0 << nl;
        return;
    }
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++) {
        v[i].first = a[i];
        v[i].second = i;
    }
    sort(all(v));
    int ans = 0;
    for (int i = 0; i < n; i++) {
        ans = max(ans, (int)__lg(abs(i - v[i].second)));
    }
    cout << (1LL << ans) << nl;
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