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
    int h,n;cin>>h>>n;
    vector<int> a(n), c(n);
    for(auto &i:a)cin>>i;
    for(auto &i:c)cin>>i;

    auto ok=[&](int mid){
        int cnt=0;
        for(int i=0;i<n;i++){
            cnt+=(((mid+c[i]-1)/c[i])*a[i]);
            if(cnt>=h)return true;
        }
        return (cnt>=h);
    };

    int l=0,r=1e12,mid,ans=0;
    while(l<=r){
        mid=l+(r-l)/2;
        if(ok(mid)){
            ans=mid;
            r=mid-1;
        }else{
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