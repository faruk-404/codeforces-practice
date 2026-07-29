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
    vector<int> a;
    a.push_back(n);
    for (int i = 0; i <= __lg(n); i++)
    {
        if ((n >> i) & 1)
        {
            a.push_back(n - (1 << i));
        }
    }
    if (a.back() == 0)
        a.pop_back();
    sort(all(a));
    a.erase(unique(a.begin(), a.end()), a.end());
    cout << a.size() << nl;
    for (auto i : a)
        cout << i << ' ';
    nf;
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