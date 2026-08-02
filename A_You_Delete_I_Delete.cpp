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
    if (s.find('1') != string::npos)
        s.erase(s.find('1'), 1);
    if (s.find('0') != string::npos)
        s.erase(s.find('0'), 1);
    cout << s << nl;
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