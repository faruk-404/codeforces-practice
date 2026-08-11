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
    string s, ss = "hello";
    cin >> s;
    int j = 0;
    bool ok = false;
    for (auto i : s) {
        if (i == ss[j]) {
            j++;
        }
        if (j == 5) {
            ok = true;
            break;
        }
    }
    if (ok)
        cy;
    else
        cn;
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