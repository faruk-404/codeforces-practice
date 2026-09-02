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
    int n,a,b,c;cin>>n>>a>>b>>c;
    vector<int> dp(n+1,-1);
    dp[0]=0;
    for(auto k:{a,b,c}){
        for(int i=0;i<=n;i++){
            if(dp[i]==-1 || (i+k>n)) continue;
            dp[i+k]=max(dp[i+k],dp[i]+1);
        }
    }
//    for(auto i:dp)cout<<i<<' ';
    cout<<dp[n]<<nl;

}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--){solve();}
    return 0;
}