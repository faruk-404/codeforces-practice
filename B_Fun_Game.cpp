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
    string s,t;cin>>s>>t;
    int st=n+1,tt=n+1;
    if(s.find("1")!=string::npos)st=s.find("1");
    if(t.find("1") != string::npos)tt=t.find("1");
    if(st<=tt)cy;
    else cn;
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--){solve();}
    return 0;
}