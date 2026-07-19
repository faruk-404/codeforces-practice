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
    int as=0,bs=0,l=0,r=n-1;
    while(l<=r){
        if(l==r){as+=a[l];break;}
        if(a[l]<=a[r]){as+=a[r--];}
        else{ as+=a[l++];}
        if(a[l]<=a[r]){ bs+=a[r--]; }
        else { bs+=a[l++]; };
    }
    cout<<as<<' '<<bs<<nl;
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--){solve();}
    return 0;
}