#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define nf cout<<'\n'
#define ll long long
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define all(v) v.begin(),v.end()
const int N=3e5+5;

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
int my_rand(int l, int r) {
    return uniform_int_distribution<int>(l, r)(rng);
}
void solve(){
  //  int n = my_rand(1, 5);
  int n = 10;
  vector<int> a(n);
  for (auto& i : a) i = my_rand(1, 100);
  sort(all(a));
  for (auto i : a) cout << i << ' ';
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t=1;
    // cin>>t;
    while(t--)solve();
    return 0;
}