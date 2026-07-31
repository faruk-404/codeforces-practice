#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define nf cout << '\n'
#define int long long
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
const int N = 1e7 + 1;

vector<bool> is(N, true);
vector<int> cnt(N, 0), pre(N, 0);
void sieve()
{
    for (int i = 2; i < N; i++)
    {
        if (!is[i])
            continue;
        for (int j = i; j < N; j += i)
        {
            is[j] = false;
            cnt[j]++;
        }
    }
    for (int i = 2; i < N; i++)
    {
        pre[i] = cnt[i] + pre[i - 1];
    }
}

void solve()
{
    int n;
    cin >> n;
    cout << pre[n] << nl;
}
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    sieve();
    int t = 1;
    cin >> t;

    while (t--)
    {
        solve();
    }
    return 0;
}