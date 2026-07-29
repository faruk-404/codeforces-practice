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
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    if ((n / 2) < k)
    {
        cout << -1 << nl;
        return;
    }
    int ans = 0;
    for (int i = 0; i < k; i++)
    {
        if (s[i] == 'L')
            ans++;
    }
    reverse(all(s));
    for (int i = 0; i < k; i++)
    {
        if (s[i] == 'R')
            ans++;
    }
    cout << ans << nl;
}
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}