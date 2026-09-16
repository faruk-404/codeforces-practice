#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define nf cout<<'\n'
#define int long long
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()

const int N=4e4+4,mod=1e9+7;
vector<int> cnt;
void pre(){
    for(int i=1;i<N;i++){
        string s=to_string(i);
        string t=s;
        reverse(s.begin(),s.end());
        if(s==t)cnt.push_back(i);
    }
}
vector<int> dp(N,0);
void cal(){
    dp[0]=1;
    for(auto k:cnt){
        for(int i=0;i<N;i++){
            if(i+k>=N || dp[i]==0)continue;
            dp[i+k]=(dp[i+k]+dp[i])%mod;
        }
    }
}
void solve(){
    int n;cin>>n;
    cout<<dp[n]<<nl;
    
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    pre();
    cal();
    int t=1;
    cin>>t;
    while(t--){solve();}
    return 0;
}