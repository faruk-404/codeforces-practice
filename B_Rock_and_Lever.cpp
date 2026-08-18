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
    vector<int> cnt(32);

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        cnt[__lg(x)]++;
    }
    auto sum = [&](int n) { return ((1LL * n * (n - 1)) / 2); };
    int ans = 0;
    for (int i = 0; i < 32; i++) {
        ans += sum(cnt[i]);
    }
    cout << ans << nl;
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
//     vector<int> a(n);
//     for (auto &i : a)
//         cin >> i;
//     vector<int> cnt(50, -1);
//     auto sum = [&](int n)
//     {
//         return (1LL * (n * (n + 1)) / 2);
//     };
//     for (auto i : a)
//         cnt[__lg(i)]++;
//     int ans = 0;
//     for (auto i : cnt)
//     {
//         if (i > 0)
//             ans += sum(i);
//     }
//     cout << ans << nl;
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