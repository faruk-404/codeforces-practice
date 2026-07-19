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
    string s,t;cin>>s>>t;
    vector<int> a;
    vector<int>cs(26),ct(26);
    for(auto i:s){cs[i-'a']++;}
    for(auto i:t){ct[i-'a']++;}
    for(auto i:cs)cout<<i<<' ';
    nf;
    for(auto i:ct)cout<<i<<' ';
    nf;
    int x;
    while(cin>>x)a.push_back(x);
    for(auto i:a)cout<<i<<' ';
    int ans=0;
    string ss="";
    for(auto i:a){
        ss+=s[i-1];

    }
    nf;
    cout<<ss<<nl;
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--){solve();}
    return 0;
}