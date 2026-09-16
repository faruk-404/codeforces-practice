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
    int n,x;cin>>n>>x;
    vector<int> a(n);
    for(auto &i:a)cin>>i;
    vector<int> dp1(n,0);
    dp1[0]=max(a[0],0LL);
    for(int i=1;i<n;i++){
        dp1[i]=max(0LL,dp1[i-1]+a[i]);
    }
    vector<int> dp2(n,0);
    dp2[n-1]=max(0LL,a[n-1]);

    for(int i=n-2;i>=0;i--){
        dp2[i]=max(0LL,dp2[i+1]+a[i]);
    }
    vector<int> dp3(n);
    dp3[0]=dp1[0];
    dp3[0]=max(dp3[0],a[0]*x);
    for(int i=1;i<n;i++){
        dp3[i]=max({dp3[i],dp1[i],(dp1[i-1]+a[i]*x),dp3[i-1]+a[i]*x});
    }
    vector<int> dp(n);
    dp[n-1]=max(0LL,dp3[n-1]);
    for(int i=n-2;i>=0;i--){
        dp[i]=max(dp[i],dp3[i]+dp2[i+1]);
    }
    cout<<*max_element(all(dp))<<nl;
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--){solve();}
    return 0;
}