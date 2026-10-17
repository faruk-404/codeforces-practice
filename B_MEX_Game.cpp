#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define nf cout<<'\n'
#define ll long long
#define int long long
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define all(v) v.begin(),v.end()

struct DynamicMex {
    int n,k;
    vector<int> cnt;
    multiset<int> missing;

    DynamicMex(int n,int k) : n(n),k(k), cnt(n + 2, 0) {
        for (int i = 0; i <= n + 1; i++)
        for(int j=0;j<k;j++) missing.insert(i);
    }
    void add(int x) {
        if (x < 0 || x > n + 1) return;
        if (++cnt[x] <= k) missing.erase(missing.find(x));
    }
    void remove(int x) {
        if (x < 0 || x > n + 1 || cnt[x] == 0) return;
        if (--cnt[x] == 0) missing.insert(x);
    }
    int mex() { return *missing.begin(); }
};

void solve(){
    int n,k;cin>>n>>k;
    vector<int> a(n);
    for(auto &i:a)cin>>i;
    sort(all(a));
    DynamicMex A(n/k,k),B(n/k,k);
    for(auto i=0;i<n;i+=2){
        A.add(a[i]);
        B.add(a[i+1]);
    }
    A.mex()!=B.mex()?cy:cn;
    // DynamicMex m(3,2);
    // m.add(0),
    // m.add(0),
    // m.add(1),
    // m.add(2),
    // m.add(0);
    // cout<<m.mex()<<nl;
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--){solve();}
    return 0;
}