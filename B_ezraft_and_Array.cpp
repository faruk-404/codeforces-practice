#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define nf cout << '\n'
#define int long long
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
vector<int> v(50);
void ok()
{
    v[0] = 1;
    v[1] = 2;
    v[2] = 3;
    for (int i = 3; i < 50; i++)
    {
        v[i] = v[i - 1] * 2;
    }
}

void solve()
{
    int n;
    cin >> n;
    if (n == 1)
    {
        cout << 1 << nl;
        return;
    }
    if (n == 2)
    {
        cout << -1 << nl;
        return;
    }
    for (int i = 0; i < n; i++)
        cout << v[i] << ' ';
    cout << '\n';
}
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ok();
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}