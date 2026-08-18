#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define nf cout << '\n'
#define int long long
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()

void solve() {
    int n;
    cin >> n;
    vector<int> a;
    if (__builtin_popcount(n) == 1) {
        cout << 1 << '\n' << n << nl;
        return;
    }
    a.push_back(n);
    for (int i = __lg(n); i >= 0; i--) {
        if ((n >> i) & 1) {
            a.push_back((n & (~(1LL << i))));
        }
    }
    sort(a.begin(), a.end());
    cout << a.size() << '\n';
    for (auto i : a)
        cout << i << ' ';
    cout << '\n';
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
} // #include <bits/stdc++.h>
// using namespace std;

// #define nl '\n'
// #define nf cout << '\n'
// #define int long long
// #define cy cout << "YES\n"
// #define cn cout << "NO\n"
// #define all(v) v.begin(), v.end()
// #define rall(v) v.rbegin(), v.rend()

// void solve()
// {
//     int n;
//     cin >> n;
//     vector<int> a;
//     a.push_back(n);
//     for (int i = 0; i <= __lg(n); i++)
//     {
//         if ((n >> i) & 1)
//         {
//             a.push_back(n - (1LL << i));
//         }
//     }
//     if (a.back() == 0)
//         a.pop_back();
//     sort(all(a));
//     cout << a.size() << nl;
//     for (auto i : a)
//         cout << i << ' ';
//     nf;
// }
// int32_t main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int t = 1;
//     cin >> t;
//     while (t--)
//     {
//         solve();
//     }
//     return 0;
// }