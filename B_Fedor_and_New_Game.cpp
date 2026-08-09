#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define nf cout << '\n'
#define int long long
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()

void solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> a(m + 1);
    for (auto &i : a)
        cin >> i;
    int fedor = a[m];
    int ans = 0;
    for (int i = 0; i < m; i++)
    {
        int cnt = (fedor ^ a[i]);
        if (__builtin_popcount(cnt) <= k)
            ans++;
    }
    cout << ans << nl;
}
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    // cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}