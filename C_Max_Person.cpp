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
    int n,m;cin>>n>>m;
    if(m&1){
        cout<<-1<<nl;
        return;
    }
    int r=m/2;
    int resut=0;
    while(r>0){
        int cap=min(r,n);
        if((cap&1) != (r&1)) cap--;
        resut+=cap;
        r-=cap;
        r/=2;
    }
    cout<<resut<<nl;
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--){solve();}
    return 0;
}