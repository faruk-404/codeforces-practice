#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define nf cout<<'\n'
#define int long long
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()

bool ok(int mid,int k,int n){
    int ans=mid/n;
    return (mid-ans)>=k;
}

void solve(){
    int n,k;cin>>n>>k;
    //if(k==1){cout<<1<<nl;return;}
    int l=0,r=1e10+1,mid,ans=0;
    while(l<=r){
        mid= l+(r-l)/2;
        if(ok(mid,k,n)){
            ans=mid;
            r=mid-1;
           
        }
        else{
            l=mid+1;
            
        }
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