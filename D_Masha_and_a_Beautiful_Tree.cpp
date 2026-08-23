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
    int sum = accumulate(a.begin(), a.begin() + n / 2, 0LL);
    int summ = (n * (n + 1)) / 2;
    int summm = ((n / 2) * ((n / 2) + 1)) / 2;
    summ -= summm;
    if (sum != summ && sum != summm) {
        cout << -1 << nl;
        return;
    }
    int ans = 0;
    for (int j = 2; j <= n; j *= 2) {
        for (int i = 0; i < n; i += j) {
            if (a[i] > a[i + j - 1])
                ans++;
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