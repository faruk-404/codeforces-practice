#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define nf cout<<'\n'
#define int long long
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()

void solve(){
    int n;cin>>n;
    vector<int> a(n);
    for(auto &i:a)cin>>i;
    int pre=0;
    bool ok=true;
    for(int i=0;i<n-1;i++){
        int need=pre+1;
        if(a[i]<need){
            ok=false;
            break;
        }
        a[i+1]+=(a[i]-need);
        pre=need;
    }
    if(!ok || a[n-1]<pre+1)cn;
    else cy;
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--){solve();}
    return 0;
}// #include <bits/stdc++.h>
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
  
//     int sum=(n*(n+1)/2);
//     int tolal_sum=accumulate(a.begin(),a.end(),0LL);
//     if(sum>tolal_sum){cn; return;}
//     vector<int> pre(n+1);
//     for(int i=1;i<=n;i++){
//         pre[i]=pre[i-1]+a[i-1];
//     }
//     vector<int> v(n+1,0);
//     v[1]=1;
//     for(int i=2;i<=n;i++){
//         v[i]=i+v[i-1];

//     }
//     bool ok=true;
//     // for(auto i:pre)cout<<i<<' ';nf;
//     // for(auto i:v)cout<<i<<' ';nf;
//     for(int i=1;i<=n;i++){
//         if(pre[i]<v[i]){
//             ok=false;
//             break;
//         }
//     }
    
//     if(!ok)cn;
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