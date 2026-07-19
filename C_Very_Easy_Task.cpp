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
    int n,x,y;cin>>n>>x>>y;
    n--;
    auto ok=[&](int mid){

        int cnt=(mid/x+mid/y);;
        return(n<=cnt);
    };
    int l=0,r=1e12,mid,ans=0;
    while(l<=r){
        mid= l+(r-l)/2;
        if(ok(mid)){
            ans=mid;
            r=mid-1;
        }else{
            l=mid+1;
        }
    }
    cout<<ans+min(x,y)<<nl;
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--){solve();}
    return 0;
}