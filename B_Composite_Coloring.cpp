#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define nf cout << '\n'
#define int long long
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
const int N = 1000 + 5;
vector<int> spf(N);
void SPF() {
    for (int i = 0; i < N; i++) {
        spf[i] = i;
    }
    for (int i = 2; i < N; i++) {
        if (spf[i] != i)
            continue;
        for (int j = i; j < N; j += i) {
            if (spf[j] != j)
                continue;
            spf[j] = i;
        }
    }
}
void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &i : a)
        cin >> i;
        map<int,vecto
    for (auto i : a)
        cout << spf[i] << ' ';
    nf;
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    SPF();
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
//     int n;cin>>n;
//     vector<int> a(n);
//     for(auto &i:a)cin>>i;

//     vector<int> prime={2,3,5,7,11,13,17,19,23,29,31};

//     map<int,vector<int>> mp;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<11;j++){
//             if(a[i]%prime[j]==0){
//                 mp[prime[j]].push_back(i);
//                 break;
//             }
//         }
//     }
//     cout<<mp.size()<<nl;
//     int cnt=1;
//     vector<int> vis(n);
//     for(auto [x,y]:mp){
//         for(auto i:y)vis[i]=cnt;
//         cnt++;
//     }
//     for(auto i:vis)cout<<i<<' ';
//     nf;
// }
// int32_t main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int t=1;
//     cin>>t;
//     while(t--){solve();}
//     return 0;
// }