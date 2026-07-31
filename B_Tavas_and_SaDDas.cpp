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
    string s;
    cin >> s;
    vector<int> cnt(s.size());
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '7')
            cnt[i] = 2;
        else if (s[i] == '4')
            cnt[i] = 1;
        else
        {
            cout << 0 << nl;
            return;
        }
    }
    int ans = (1 << (s.size() + 1));
    ans -= 2;
    reverse(all(cnt));
    for (int i = 0; i < s.size(); i++)
    {
        if (cnt[i] != 2)
            ans -= (1 << i);
    }
    cout << ans << nl;
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