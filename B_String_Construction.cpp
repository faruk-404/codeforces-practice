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
    if (n - 2 < k)
    {
        cout << -1 << nl;
        return;
    }
    int onn = (k + 1) / 2 + 1;
    int xee = (k / 2) + 1;
    string  ans="";

    for (int i = 0; i < xee; i++)
    {
         ans+="0";
    }
    for (int i = 0; i < onn; i++)
    {
        ans+="1";
    }
    while (!(ans.size() == n))
    {
        if (ans.empty())
            ans+="0";
        else if (ans.back() == '1')
            ans+="0";
        else
            ans+="1";
    }
    cout<<ans<<nl;
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