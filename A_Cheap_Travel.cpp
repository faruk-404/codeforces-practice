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
    int n,m,a,b;cin>>n>>m>>a>>b;
    int nn=n;
    n+=m;
    vector<int> dp(n+1,LLONG_MAX);
    vector<pair<int,int>> p;
    p.push_back({1,a});
    p.push_back({m,b});
    dp[0]=0;
    for(auto [t,r]:p){
        for(int i=0;i<=n;i++){
            if(dp[i]==LLONG_MAX)continue;
            if(i+t>n)continue;
            dp[i+t]=min(dp[i+t],dp[i]+r);
        }
    }
    cout<<*min_element(dp.begin()+nn,dp.end())<<nl;
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--){solve();}
    return 0;
}