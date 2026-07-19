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
    int m,n;cin>>m>>n;
    vector<tuple<int,int,int>> a(n);
    for(int i=0;i<n;i++){
        int t,z,y;cin>>t>>z>>y;
        a[i]=make_tuple(t,z,y);
    }
    vector<int> ass(n);
    auto ok=[&](int mid){
        vector<int> ann(n);
        int has=m;
        for(int i=0;i<n;i++){
            tuple<int,int,int> T=a[i];
            int t=get<0>(T);
            int z=get<1>(T);
            int y=get<2>(T);
            int total=(t*z)+y;
            int can=(mid/total);
            int remaining =mid%total;
            int curr=((can*z)+min(z,remaining/t));
            curr=min(has,curr);
            has-=curr;
            ann[i]=curr;
        }
        if(!has){
            for(int i=0;i<n;i++){
                ass[i]=ann[i];
            }
        }
        return (!has);
    };
    int l=0,r=1e8,mid,ans=0;
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
    for(auto i:ass)cout<<i<<' ';

}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--){solve();}
    return 0;
}