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
    // vector<int> dp(n+101,LLONG_MAX);
    // dp[0]=0;
    // for(auto k:{1,5,10,20,100}){
    //     for(int i=0;i<=n;i++){
    //         if(i+k>n || dp[i+k]==-1)continue;
    //         dp[i+k]=min(dp[i+k],dp[i]+1);
    //     }
    // }
    // cout<<dp[n]<<nl;

    // int ans=0;
    // for(auto k:{100,20,10,5,1}){
    //     while(n && n>=k){ans++; n-=k;}
    // }
    // cout<<ans<< nl;

    int ans=0;
    for(auto k:{100,20,10,5,1}){
        if(n>0 && n>=k){ans+=n/k;n%=k;}
    }
    cout<<ans<< nl;
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--){solve();}
    return 0;
}