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
    for(auto &i:a){
        cin>>i;
        ++i;
    }

    auto st=[&](int mid){
        return ((mid*(mid+1))/2);
    };
    
    auto ok=[&](int mid){
        int cnt=0;
        int sum=st(mid);
        vector<bool> vis(n+1,true) ,v(n+1,true);
        int su=0;
        for(int i=0;i<n;i++){
            if(mid>=a[i] && vis[a[i]]){
                su+=a[i];
                vis[a[i]]=false;
            }
            if(su>=sum){
                cnt++;
                vis=v;
                su=0;
            }
            if(cnt>=k)return true;
           
        }
        return (cnt>=k);
    };
    int l=0,r=1,mid,ans=0;
    while(ok(r))r*=2;
    while(l<=r){
        mid=l+(r-l)/2;
        if(ok(mid)){
            ans=mid;
            l=mid+1;
        }else{
            r=mid-1;
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