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
//     int n, m;
//     cin >> n >> m;
//     vector<int> a(n), ans(m);
//     for (auto &i : a)
//         cin >> i;
//     sort(a.begin(), a.end());
//     for (int i = 0; i < m; i++) {
//         int x;
//         cin >> x;
//         auto it = --lower_bound(a.begin(), a.end(), x + 1);
//         ans[i] = it - a.begin() + 1;
//     }
//     for (auto i : ans)
//         cout << i << ' ';
//     cout << '\n';
// }
// int32_t main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int t = 1;
//     // cin>>t;
//     while (t--) {
//         solve();
//     }
//     return 0;
// }

#include <bits/stdc++.h>

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

#define nl '\n'
#define nf cout << '\n'
#define int long long
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()

template <typename T>
using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag,
                  tree_order_statistics_node_update>;

void solve() {
    int n, m;
    cin >> n >> m;
    pbds<int> pd;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        pd.insert(x);
    }
    vector<int> ans(m);
    for (int i = 0; i < m; i++) {
        int x;
        cin >> x;
        int id = pd.order_of_key(x + 1);
        ans[i] = id;
    }
    for (auto i : ans)
        cout << i << ' ';
    cout << '\n';
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}