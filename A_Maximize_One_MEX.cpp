#include <bits/stdc++.h>
using namespace std;
#ifdef LOCAL
#include "debug.h"
#else
#define dbg(...)
#define dbg_arr(...)
#define dbg_range(...)
#define dbg_grid(...)
#define dbg_time(...)
#endif

#define nl '\n'
#define nf cout << '\n'
#define ll long long
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define all(v) v.begin(), v.end()
const int N = 3e5 + 5;

struct Mex {
    ll n;
    vector<ll> cnt;
    set<ll> missing;

    Mex(ll n) : n(n), cnt(n + 2, 0) {
        for (ll i = 0; i <= n + 1; i++) missing.insert(i);
    }
    void add(ll x) {
        if (x < 0 || x > n + 1) return;
        if (++cnt[x] == 1) missing.erase(x);
    }
    void remove(ll x) {
        if (x < 0 || x > n + 1 || cnt[x] == 0) return;
        if (--cnt[x] == 0) missing.insert(x);
    }
    ll mex() { return *missing.begin(); }
};

void solve() {
    int n, k;
    cin >> n >> k;
    int x = n + 1 - k;
    vector<int> a(n);
    for (auto& i : a) cin >> i;
    Mex d(n);
    for (int i = 0; i < n; i++) {
        d.add(a[i]);
        if (d.mex() == x) {
            cout << -1 << nl;
            return;
        }
    }
    int c = find(a.begin(), a.end(), x) - a.begin();
    cout << c + 1 << ' ' << n << nl;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}