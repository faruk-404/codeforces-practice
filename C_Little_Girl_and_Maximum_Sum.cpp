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
    for (auto &i : a) {
        cin >> i;
    }
    vector<int> pre(n + 2);
    for (int i = 0; i < q; i++) {
        int l, r;
        cin >> l >> r;
        pre[l - 1]++;
        pre[r]--;
    }
    for (int i = 1; i < n + 2; i++) {
        pre[i] += pre[i - 1];
    }
    sort(a.rbegin(), a.rend());
    sort(pre.rbegin(), pre.rend());

    int ans = 0;
    for (int i = 0; i < n; i++) {
        ans += a[i] * pre[i];
    }
    cout << ans << nl;
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