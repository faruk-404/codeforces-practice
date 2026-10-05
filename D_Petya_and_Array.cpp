#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

#define nl '\n'
#define nf cout<<'\n'
#define int long long
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define all(v) v.begin(),v.end()    //pb.order_of_key(x); x>cnt
#define rall(v) v.rbegin(),v.rend()  //pb.find_by_order(idx); valu
template<typename T> using pbds=tree<T,null_type,less_equal<T>,rb_tree_tag,tree_order_statistics_node_update>;

void solve(){
    int n,t;cin>>n>>t;
    vector<int> a(n);
    for(auto &i:a)cin>>i;
    vector<int>pre(n+2);
    for(int i=1;i<=n;i++){
        pre[i]=pre[i-1]+a[i-1];
    }
    pbds<int> pb;
    int ans=0;
    for(int i=0;i<=n;i++){
        ans+=pb.order_of_key(-(pre[i]-t));
        pb.insert(-pre[i]);
    }
    cout<<ans<<nl;
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--){solve();}
    return 0;
}