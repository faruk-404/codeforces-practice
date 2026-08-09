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
    int su = 0;
    for (auto i : a)
        su |= i;
    auto ok = [&](int mid)
    {
        bool fl = true;
        for (int i = 0; i <= n - mid; i++)
        {
            int sum = 0;
            for (int j = i, cnt = 1; cnt <= mid; cnt++, j++)
            {
                sum |= a[j];
            }
            if (sum != su)
            {
                fl = false;
                break;
            }
        }
        return fl;
    };
    int l = 1, r = n, mid = 1, ans = 0;
    int ll = 0;
    for (int i = 0; i < n; i++)
    {
        ll |= a[i];
        if (su == ll)
        {
            l = i + 1;
            break;
        }
    }
    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if (ok(mid))
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
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