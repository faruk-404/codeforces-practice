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
    int n;cin>>n;
    vector<int> color(n+2,0);
    for(int i=2;i<=n+1;i++){
        for(int j=i;j<=n+1;j+=i){
            color[j]++;
        }
    }
    int cnt=2;
    if(n<3) cnt=1;
    cout<<cnt<<nl;
    for(int i=2;i<=n+1;i++){
        if(color[i]>1)cout<<2<<' ';
        else cout<<1<<' ';
    }
    cout<<'\n';

}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--){solve();}
    return 0;
}