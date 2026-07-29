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
    int ox = n ^ k;
    if (ox > n || (n == 1 && k == 0))
    {
        cout << "NO\n";
        return;
    }
    cy;
    for (int i = 1; i < n; i++)
    {
        if (i == ox)
            continue;
        cout << i << ' ';
    }
    if (ox != 0 && ox != n)
        cout << 0 << ' ' << ox << nl;
    else
        cout << 0 << nl;
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