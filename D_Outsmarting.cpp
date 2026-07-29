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
    int cnt=0;
    bool ok=false;
    for(int i=1;i<n;i++){
        if(s[i-1]!=s[i])cnt++;
        if(cnt>=2){ok=true;break;}
    }
    if(ok)cout<<"Alice\n";
    else cout<<"Bob\n";
    
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--){solve();}
    return 0;
}