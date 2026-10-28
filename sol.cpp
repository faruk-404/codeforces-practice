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
    int n = 10;
    vector<int> a(n);
    for (auto& i : a) cin >> i;
    // sort(all(a));
    int mm = INT_MAX;
    for (int i = 1; i < n; i++) {
        mm = min((a[i - 1] & a[i]) ^ (a[i - 1] | a[i]), mm);
    }
    cout << mm << nl;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t=1;
    // cin>>t;
    while(t--)solve();
    return 0;
}