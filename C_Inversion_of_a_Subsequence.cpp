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
    vector<int> a(n), b(n);
    for (auto &i : a)
        cin >> i;
    for (auto &i : b)
        cin >> i;
    if (a == b) {
        cout << 0 << nl;
        return;
    }
    if (count(b.begin(), b.end(), 1) == n ||
        count(a.begin(), a.end(), 0) == n) {
        cout << -1 << nl;
        return;
    }
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == 1 && a[i] != b[i])
            cnt++;
    }
    if (cnt & 1)
        cout << 1 << nl;
    else
        cout << 2 << nl;
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