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
    int k,n;cin>>k>>n;
    vector<int> a(n);
    for(auto &i:a)cin>>i;

    auto ok=[&](int  mid){
        int total=0;
        for(auto i:a){
            total+=min(i,mid);
            if(total>=1e18)return false;
        }
        return (total>=k*mid);
    };
    
    int l=0,r=1e12,mid,ans=0;
    while(l<=r){
        mid=l+(r-l)/2;
        if(ok(mid)){
            ans=mid;
            l=mid+1;
        }
        else{
            r=mid-1;
        }
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