#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define nf cout<<'\n'
#define ll long long
#define int long long
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define all(v) v.begin(),v.end()
int setbitCount(int r){
    int cnt=0;
    for(int i=0;i< __lg(r);i++){
        int k=(1<<i+1);
        cnt+=(r/k);
        cnt+=((((r%k)-(1<<i))>0)?(r%k)-(1<<i):0);
    }
    return cnt;
}

void solve(){
    int l,r;cin>>l>>r;
    int ans=l;
    while((ans|(ans+1))<=r)(ans|=(ans+1));
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