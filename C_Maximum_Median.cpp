#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define nf cout<<'\n'
#define int long long
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()

bool ok(int mid, vector<int> st, int k){
    int cnt=0;
    for(int i=0;i<(int)st.size();i++){
        if(mid>st[i])cnt+=(mid-st[i]);
        if(k<cnt){
            return false;
        }
    }
    return k>=cnt;

}

void solve(){
    int n,k;cin>>n>>k;
    vector<int> a(n);
    for(auto &i:a)cin>>i;
    sort(all(a));
    int mi=n/2;
    vector<int> st;
    for(;mi<n;mi++){
        st.push_back(a[mi]);
    }
   // for(auto i:st)cout<<i<<' ';
    int l=0,r=1e12,mid,ans=0;
    while(l<=r){
        mid=l+(r-l)/2;
        if(ok(mid,st,k)){
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