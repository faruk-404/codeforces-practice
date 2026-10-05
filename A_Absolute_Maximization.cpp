#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define nf cout<<'\n'
#define ll long long
#define int long long
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define all(v) v.begin(),v.end()

void solve(){
    int n;cin>>n;
    vector<int> a(n);
    for(auto &i:a)cin>>i;
    int o=a[0],an=a[0];
    for(auto i:a)o|=i,an&=i;
    cout<<o-an<<nl;
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--){solve();}
    return 0;
}
// #include <bits/stdc++.h>
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
//     int orr = 0, ann = a[0];
//     for (auto i : a)
//     {
//         orr |= i;
//         ann &= i;
//     }
//     cout << orr - ann << nl;
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