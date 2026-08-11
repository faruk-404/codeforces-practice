#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define nf cout << '\n'
#define int long long
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
vector<int> v(26);
void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    for (auto i : s)
        v[i - 'a']++;
    string ans = "";
    for (int i = 0; i < 26; i++) {
        for (int j = 0; j < v[i]; j++) {
            ans += (char)('a' + i);
        }
    }
    cout << ans << '\n';
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    // cin>>t;
    while (t--) {
        solve();
    }
    return 0;
}