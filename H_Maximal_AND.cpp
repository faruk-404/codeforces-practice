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
    int n,k;cin>>n>>k;
    vector<int> a(n);
    for(auto &i:a)cin>>i;
    vector<int> sum(31);
    for(auto x:a){
        for(int i=0;i<=30;i++){
            if((x>>i)&1)sum[i]++;
        }
    }
    for(int i=30;i>=0;i--){
        if(sum[i]+k>=n){
            k-=(n-sum[i]);
            sum[i]=n;
        }
    }
    int ans=0;
    for(int i=0;i<31;i++){
        if(sum[i]==n)ans+=(1<<i);
    }
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