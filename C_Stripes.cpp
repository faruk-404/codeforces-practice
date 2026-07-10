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
   vector<string> s(8);
   for(auto &i:s)cin>>i;
   string a="RRRRRRRR";
   for(auto i:s){
    if(i==a){cout<<'R'<<nl;return;}
   }
   cout<<'B'<<nl;
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--){solve();}
    return 0;
}