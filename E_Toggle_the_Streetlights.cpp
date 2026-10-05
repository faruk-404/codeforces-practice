#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define nf cout << '\n'
#define ll long long
#define int long long
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define all(v) v.begin(), v.end()

void solve() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    if (k == 0) {
        cout << s << nl;
        return;
    }
    string ss = s;
    int t = min((int)100, k);
    if((k&1)  && t!=k)t--;

    while (t--) {
        for (int i = 1; i < n - 1; i++) {
            if (s[i - 1] == '1' && s[i + 1] == '1') {
                if (s[i] == '1')
                    ss[i] = '0';
                else
                    ss[i] = '1';
            }
        }
        s = ss;
    }
    cout << s << nl;
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