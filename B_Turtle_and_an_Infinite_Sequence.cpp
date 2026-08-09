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
    int l = max(n - m, (int)0);
    int r = m + n;
    int d = r - l + 1;
    int ans = 0;
    for (int i = 0; i <= __lg(r); i++) {
        if ((r >> i) & 1) {
            ans += (1LL << i);
        } else if ((l >> i) & 1) {
            ans += (1LL << i);
        } else if (d > (1LL << i)) {
            ans += (1LL << i);
        }
    }
    cout << ans << nl;
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