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
    int k;
    cin >> k;
    map<int, int> a;
    for (int i = 0; i < k; i++) {
        int val;
        cin >> val;
        a[val]++;
    }
    map<int, int> cntt;
    for (auto [x, m] : a) {
        int n = x;
        for (int i = 2; i * i <= n; i++) {
            int cnt = 0;
            while (n % i == 0) {
                cnt++;
                n /= i;
            }
            if (cnt)
                cntt[i] += (cnt * m);
        }
        if (n != 1)
            cntt[n] += m;
    }
    bool ok = true;
    for (auto [i, j] : cntt) {
        if (j % k != 0) {
            ok = false;
            break;
        }
    }
    if (ok)
        cy;
    else
        cn;
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
}

// #include <bits/stdc++.h>
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
//     map<int,int> mp;
//     for(int i=0;i<n;i++){
//         for(int j=2;j*j<=a[i];j++){
//             while(a[i]%j==0){
//                 mp[j]++;
//                 a[i]/=j;
//             }
//         }
//         if(a[i]>1)mp[a[i]]++;

//     }
//     bool ok=false;
//     for(auto [x,y]:mp)if(y%n!=0){ok=true;break;}
//     if(ok)cn;
//     else cy;
// }
// int32_t main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int t=1;
//     cin>>t;
//     while(t--){solve();}
//     return 0;
// }