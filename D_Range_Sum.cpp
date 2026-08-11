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
    int ll, rr;
    cin >> ll >> rr;
    int l = min(ll, rr);
    int r = max(ll, rr);
    auto sum = [&](int n) { return ((1LL * n * (n + 1)) / 2); };
    cout << sum(r) - sum(l - 1) << '\n';
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