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
  
    int sum=(n*(n+1)/2);
    int tolal_sum=accumulate(a.begin(),a.end(),0LL);
    if(sum>tolal_sum){cn; return;}
    vector<int> pre(n+1);
    for(int i=1;i<=n;i++){
        pre[i]=pre[i-1]+a[i-1];
    }
    bool ok=true;
    for(int i=0;i<n;i++){
        if(!(a[i]<=pre[i+1]) ){
            ok=false;
            break;
        }
    }
    if(!ok)cn;
    else cy;
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--){solve();}
    return 0;
}