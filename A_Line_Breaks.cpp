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
    int n,m;cin>>n>>m;
    vector<string> a(n);
    for(auto &i:a)cin>>i;
    vector<int> pre(n+1);
    for(int i=1;i<=n;i++){
        pre[i]=pre[i-1]+(int)a[i-1].size();
    }
    auto it=upper_bound(pre.begin(),pre.end(),m);
    it--;
    int ans=it - pre.begin();
    cout<<ans<<nl;
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--){solve();}
    return 0;
}