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
    string s;cin>>s;
    int  l=0,r=n-1;
    while(l<=r){
        if(s[l]=='W')l++;
        else break;
    }
    while(l<=r){
        if(s[r]=='W')r--;
        else break;
    }
    cout<<r-l+1<<nl;
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--){solve();}
    return 0;
}