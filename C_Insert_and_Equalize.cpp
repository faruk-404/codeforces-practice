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
    vector<int> a(n);
    for (auto &i : a)
        cin >> i;

    sort(all(a));
    int mm = a[0];
    int g = 0;

    for (int i = 0; i < n; i++)
    {
        g = __gcd(a[i] - mm, g);
    }
    int ans = 0;
    int mx = a[n - 1];
    if (g > 0)
        for (auto i : a)
        {
            ans += (abs(mx - i)) / g;
        }

    int cnt = 1;
    int ok = true;
    for (int i = n - 1; i > 0; i--)
    {
        if (a[i] - a[i - 1] != g)
        {
            ok = false;
            break;
        }
        cnt++;
    }
    if (ok)
        cnt = n;
    cout << ans + cnt << nl;
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