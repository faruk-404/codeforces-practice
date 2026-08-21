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
    int k, n;
    cin >> k >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        a[i] = k - a[i];
    }
    sort(a.begin(), a.end());
    for (int i = 1; i < n; i++) {
        a[i] += a[i - 1];
    }
    auto it = upper_bound(a.begin(), a.end(), k - 1);
    cout << it - a.begin() << nl;
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
// #define nf cout<<'\n'
// #define int long long
// #define cy cout << "YES\n"
// #define cn cout << "NO\n"
// #define all(v) v.begin(),v.end()
// #define rall(v) v.rbegin(),v.rend()

// void solve(){
//     int en,n;cin>>en>>n;
//     vector<int> a(n);
//     for(auto &i:a)cin>>i;
//     for(auto &i:a)i=en-i;
//     sort(all(a));
//     // for(auto i:a)cout<<i<<' ';
//     // nf;
//     multiset<pair<int,int>> ml;
//     ml.insert({0,0});
//     int sum=0;
//     for(int i=0;i<n;i++){
//         sum+=a[i];
//         ml.insert({sum, i+1});
//     }
//     auto it=--ml.upper_bound({en,0});
//     cout<<it->second<<nl;
// }
// int32_t main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int t=1;
//     cin>>t;
//     while(t--){solve();}
//     return 0;
// }