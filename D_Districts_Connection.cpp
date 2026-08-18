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
    vector<int> a(n);
    for (auto &i : a)
        cin >> i;
    if (count(a.begin(), a.end(), a[0]) == n) {
        cout << "NO\n";
        return;
    }
    cy;
    int dis;
    for (int i = 1; i < n; i++) {
        if (a[0] != a[i]) {
            cout << 1 << ' ' << i + 1 << nl;
            dis = i + 1;
        }
    }
    for (int i = 1; i < n; i++) {
        if (a[0] == a[i]) {
            cout << dis << ' ' << i + 1 << nl;
        }
    }
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