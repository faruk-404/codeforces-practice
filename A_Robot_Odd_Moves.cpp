#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define nf cout<<'\n'
#define ll long long
#define int long long
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define all(v) v.begin(),v.end()

void solve(){
    int a,b;cin>>a>>b;
    if(a+1<b){
        cout<<-1<<nl;
        return;
    }
    int ans=b;
    if(a>b) ans+=((a-b)&1)?a-b+1:a-b;
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