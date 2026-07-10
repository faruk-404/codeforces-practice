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
   
   if(n<5){cout<<min(n,(int)2)<<nl;return;}
    int ans=2;
    while(n>=5){
    ans++;
    n=ceil(n/2.0);
    n--;
//    cout<<n<<' ';
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