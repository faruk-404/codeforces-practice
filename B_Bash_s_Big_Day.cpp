#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define nf cout << '\n'
#define int long long
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
const int N = 1e5 + 5;
vector<int> spf(N);
vector<bool> is(N, false);

void sieve() {
    for (int i = 1; i < N; i++)
        spf[i] = i;
    for (int i = 2; i * i <= N; i++) {
        if (spf[i] != i)
            continue;
        for (int j = i * i; j < N; j += i) {
            if (spf[j] == j)
                spf[j] = i;
        }
    }
}

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &i : a)
        cin >> i;
    map<int, int> mp;
    for (auto x : a) {
        while (x > 1) {
            int p = spf[x];
            mp[p]++;
            while (x % p == 0)
                x /= p;
        }
    }
    int ans = 1;
    for (auto [j, i] : mp)
        ans = max(i, ans);
    cout << ans << nl;
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    sieve();
    int t = 1;
    // cin>>t;
    while (t--) {
        solve();
    }
    return 0;
}