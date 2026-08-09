#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

#define nl '\n'
#define nf cout << '\n'
#define int long long
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()

template <typename T>
using pbds =
    tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

void solve() {
    int n;
    cin >> n;
    string s, t;
    cin >> s;
    t = s;
    reverse(t.begin(), t.end());
    vector<int> ss[26], tt[26];
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        ss[s[i] - 'a'].push_back(i);
        tt[t[i] - 'a'].push_back(i);
    }
    for (int i = 0; i < 26; i++) {
        for (int j = 0; j < tt[i].size(); j++) {
            a[tt[i][j]] = ss[i][j];
        }
    }
    reverse(a.begin(), a.end());
    int ans = 0;
    pbds<int> pb;
    for (auto i : a) {
        ans += pb.order_of_key(i);
        pb.insert(i);
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