#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define nf cout << '\n'
#define ll long long
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define all(v) v.begin(), v.end()
const int N = 3e5 + 5;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    vector<int> cnt(n + 1);
    for (auto& i : a) {
        cin >> i;
        if (i <= n) cnt[i]++;
    }
    int ans = 0, sum = 0;
    for (int i = 0; i <= n; i++) {
        if (cnt[i] == 0) break;
        sum += cnt[i];
        if (sum < (k * (i + 1))) break;
        ans = i + 1;
    }
    cout << ans << nl;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}