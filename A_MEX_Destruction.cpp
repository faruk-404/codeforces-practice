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
    int l=0,r=n;
    for(int i=0;i<n;i++){
        l=i;
        if(a[i]!=0)break;
        
    }
    for(int i=n-1;i>=l;i--){
        if(a[i]!=0)break;
        r=i;
    }
    if(l==r){cout<<0<<nl;return;}
    for(int i=l;i<r;i++){
        if(a[i]==0){
            cout<<2<<nl;
            return;
        }
    }
    cout<<1<<nl;
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--){solve();}
    return 0;
}