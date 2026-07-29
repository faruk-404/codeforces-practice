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
    bool ok = false;
    for (int i = 0; i < (1 << n); i++)
    {
        int sum = 0;
        for (int k = 0; k < n; k++)
        {
            if ((i >> k) & 1)
                sum += a[k];
            else
                sum -= a[k];
        }
        if (sum % 360 == 0)
        {
            ok = true;
            break;
        }
    }
    if (ok)
        cy;
    else
        cn;
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