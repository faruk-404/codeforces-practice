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
    if (n & 1)
    {
        cn;
        return;
    }
    int mx = LLONG_MIN;
    int mm = LLONG_MAX;
    for (int i = 1; i < n; i += 2)
        mx = max(a[i], mx);
    for (int i = 0; i < n; i += 2)
        mm = min(a[i], mm);
    if (mm - mx > 1)
        cy;
    else
        cn;
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