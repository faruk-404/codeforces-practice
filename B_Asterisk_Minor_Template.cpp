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
    string a, b;
    cin >> a >> b;
    if (a == b) {
        cy;
        cout << a << nl;
        return;
    }
    if (a[0] == b[0]) {
        cy;
        cout << a[0] << '*' << nl;
        return;
    }
    if (a.back() == b.back()) {
        cy;
        cout << '*' << a.back() << nl;
        return;
    }
    for (int i = 0; i < a.size() - 1; i++) {
        string s = "";
        s += a[i];
        s += a[i + 1];
        if ((b.find(s) != string::npos)) {
            cy;
            cout << '*' << s << '*' << nl;
            return;
        }
    }
    cn;
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