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
    int n;
    cin >> n;
    string s;
    cin >> s;
    int mx = 0;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '#')
            cnt++;
        mx = max(mx, cnt);
        if (s[i] == '*')
            cnt = 0;
    }
    cout << (mx + 1) / 2 << nl;
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