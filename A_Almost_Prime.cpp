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
    int ans=0;
    for(int i=1;i<=n;i++){
        int a=i;
        map<int,int> mp;
        for(int j=2;j*j<=a;j++){
            while(a%j==0){
                mp[j]++;
                a/=j;
            }
        }
        if(a>1)mp[a]++;
        if(mp.size()==2)ans++;
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