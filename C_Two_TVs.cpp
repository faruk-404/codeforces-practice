// #include <bits/stdc++.h>
// using namespace std;

// #define nl '\n'
// #define nf cout << '\n'
// #define int long long
// #define cy cout << "YES\n"
// #define cn cout << "NO\n"
// #define all(v) v.begin(), v.end()
// #define rall(v) v.rbegin(), v.rend()

// void solve() {
//     int n;
//     cin >> n;
//     map<int, int> mp;
//     for (int i = 0; i < n; i++) {
//         int l, r;
//         cin >> l >> r;
//         mp[l]++;
//         mp[r + 1]--;
//     }
//     int mx = 0;
//     bool o = true;
//     for (auto [i, j] : mp) {
//         mx += j;
//         if (mx > 2) {
//             o = false;
//             break;
//         }
//     }
//     if (o)
//         cy;
//     else
//         cn;
// }
// int32_t main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int t = 1;
//     // cin >> t;
//     while (t--) {
//         solve();
//     }
//     return 0;
// }

#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define ff first
#define ss second
#define fr(N) for (ll i = 0; i < N; i++)
#define pb push_back
#define vl vector<ll>
#define vll vector<vl>
using namespace std;
ll srt(ll a, ll v) { return a > v; }
ll max(ll a, ll b) { return (a > b) ? a : b; }
ll min(ll a, ll b) { return (a < b) ? a : b; }
void sol() {}
int main() {
    ll n;
    cin >> n;
    vector<pair<ll, ll>> vec(n), a, b;
    fr(n) cin >> vec[i].ff >> vec[i].ss;
    sort(vec.begin(), vec.end());
    ll h = 0;
    fr(n) {
        ll x = vec[i].ff, y = vec[i].ss;
        ll lna = a.size(), lnb = b.size();
        if (!a.size())
            a.pb({x, y});
        else if (a[lna - 1].ss < x)
            a.pb({x, y});
        else if (!lnb)
            b.pb({x, y});
        else if (b[lnb - 1].ss < x)
            b.pb({x, y});
        else {
            h++;
            break;
        }
    }
    if (h)
        cout << "NO\n";
    else
        cout << "YES\n";
}