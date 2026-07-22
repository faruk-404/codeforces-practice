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
    multiset<pair<int,int>> a;
    vector<int> v(k);
    for(int i=1;i<=n;i++){
        int x;cin>>x;
        a.insert({x,i});
    }
    for(auto &i:v)cin>>i;
    a.insert({LLONG_MAX,n+1});
    for(auto i:v){
        auto it=a.lower_bound({i,0});
        cout<<it->second<<nl;
    }

}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--){solve();}
    return 0;
}