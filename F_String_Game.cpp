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
    string s,t;cin>>s>>t;
    int n=s.size();
    int tt=t.size();
    vector<int> a(n);
    for(auto &i:a)cin>>i;

    auto ok=[&](int mid){
        vector<bool> vis(n+1,true);
        for(int i=0;i<mid;i++)vis[a[i]]=false;
        int j=0;
        for(int i=0;i<n;i++){
            if(vis[i+1] && s[i]==t[j])j++;
            if(j==tt)break;
        }
        return (j==tt);
    };

    int l=0,r=n,mid,ans=0;
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
    // cin>>t;
    while(t--){solve();}
    return 0;
}