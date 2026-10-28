#include <bits/stdc++.h>
using namespace std;
// #ifdef LOCAL
// #include "debug.h"
// #else
// #define dbg(...)
// #define dbg_arr(...)
// #define dbg_range(...)
// #define dbg_grid(...)
// #define dbg_time(...)
// #endif

#define nl '\n'
#define nf cout << '\n'
#define ll long long
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define all(v) v.begin(), v.end()
const int N = 3e5 + 5;

void solve() {
    string s;
    cin >> s;
    int n = s.size();
    bool cnt3 = 0, cnt1 = 0;
    for (int i = 1; i < n - 1; i++) {
        if (s[i - 1] == s[i] && s[i] == s[i + 1]) cnt3 = true;
        else if (s[i - 1] != s[i] && s[i] != s[i + 1]) cnt1 = true;
        if (cnt1 && cnt3) break;
    }
    cout << 1 + cnt3 + cnt1 << nl;
    return;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}