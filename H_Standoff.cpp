#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define nf cout<<'\n'
#define ll long long
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define all(v) v.begin(),v.end()
const int N=3e5+5;

void solve(){
    string s;
    cin >> s;
    if(s.size()==1 || count(s.begin(),s.end(),s[0])==s.size()){
        cout << 0 << nl;
        return;
    }
    cout << 2 * (s.size() - 1) << '\n';
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t=1;
    cin>>t;
    while(t--)solve();
    return 0;
}