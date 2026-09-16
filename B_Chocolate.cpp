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
    vector<int> a(n);
    for(auto &i:a)cin>>i;
    int r=n-1,l=0;
    while(l<n && a[l]==0)l++;
    while(r>=0 && a[r]==0)r--;
    if(l>r){cout<<0<<nl;return;}
    int ans=1;
    int cnt=1;
    for(int i=l;i<=r;i++){
        if(a[i]==1){
            ans*=cnt;
            cnt=1;
        }
        else cnt++;
    }
    cout<<ans<<nl;

}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    while(t--){solve();}
    return 0;
}