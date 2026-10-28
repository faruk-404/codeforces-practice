#include <bits/stdc++.h>
using namespace std;
#ifdef LOCAL
#include "debug.h"
#else
#define dbg(...)
#define dbg_arr(...)
#define dbg_range(...)
#define dbg_grid(...)
#define dbg_time(...)
#endif


#define nl '\n'
#define nf cout<<'\n'
#define ll long long
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define all(v) v.begin(),v.end()
const int N=3e5+5;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto& i : a) cin >> i;
    dbg(a);
    dbg(n);
    set<int> st;
    st.insert(1);
    st.insert(0);
    st.insert(8);
    st.insert(7);
    map<int, int> mp;
    mp[3] = 90;
    mp[4] = 12;
    mp[7] = 45;
    stack<int> s;
    s.push(9);
    s.push(8);
    s.push(3);
    priority_queue<int> pq;
    pq.push(8);
    pq.push(7);
    dbg(st);
    dbg(mp);
    dbg(s);
    dbg(pq);

    dbg_time();

    // তোমার logic
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}