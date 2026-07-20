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
    
    auto ok=[&](int mid){
        int cnt=1;
        // auto it=lower_bound(a.begin(),a.end(),(a[0]+mid));
        // while(it!=a.end()){
        //     cnt++;
        //     it=lower_bound(it,a.end(),((*it)+mid));
        // }

        int last=a[0];
        for(int i=1;i<n;i++){
            if(a[i]-last>=mid){
                cnt++;
                last=a[i];
                if(cnt>=k)return true;
            }
        }
        return (cnt>=k);
    };

    int l=0,r=1e10,mid,ans=0;
    while(l<=r){
        mid=l+(r-l)/2;
        if(ok(mid)){
            ans=mid;
            l=mid+1;
        }
        else {
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