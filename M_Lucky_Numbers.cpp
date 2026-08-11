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
    int a, b;
    cin >> a >> b;
    vector<int> ans;
    set<int> st = {4, 7};
    for (int i = a; i <= b; i++) {
        int n = i;
        set<int> s;
        while (n) {
            s.insert(n % 10);
            n /= 10;
        }
        if (s.empty())
            continue;
        if (((s.size() == 1 && ((*s.begin() == 4) || *s.begin() == 7))) ||
            s == st)
            ans.push_back(i);
    }
    if (ans.size() == 0)
        cout << -1 << nl;
    else
        for (auto i : ans)
            cout << i << ' ';
    nf;
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