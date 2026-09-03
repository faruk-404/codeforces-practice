#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define nf cout << '\n'
#define int long long
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()

const int N = 1e5 + 5;
vector<int> a(N);
vector<pair<int, int>> seg(N * 4);

void build(int node, int l, int r) {
    if (l == r) {
        seg[node] = {a[l], 1LL};
        return;
    }
    int mid = l + (r - l) / 2;
    build(2 * node, l, mid);
    build(2 * node + 1, mid + 1, r);
    int mm = min(seg[2 * node].first, seg[2 * node + 1].first);
    int cnt = 0;
    if (mm == seg[2 * node].first)
        cnt += seg[2 * node].second;
    if (mm == seg[2 * node + 1].first)
        cnt += seg[2 * node + 1].second;
    seg[node] = {mm, cnt};
}

void update(int node, int l, int r, int idx, int val) {
    if (l == r) {
        seg[node] = {val, 1LL};
        return;
    }
    int mid = l + (r - l) / 2; // if(l<=idx && mid>=idx)
    if (idx >= l && idx <= mid)
        update(2 * node, l, mid, idx, val);
    else
        update(2 * node + 1, mid + 1, r, idx, val);
    int mm = min(seg[2 * node].first, seg[2 * node + 1].first);
    int cnt = 0;
    if (mm == seg[2 * node].first)
        cnt += seg[2 * node].second;
    if (mm == seg[2 * node + 1].first)
        cnt += seg[2 * node + 1].second;
    seg[node] = {mm, cnt};
}

pair<int, int> query(int node, int l, int r, int ll, int rr) {
    if (ll <= l && rr >= r) {
        return seg[node];
    }
    if (l > rr || r < ll) {
        return {LLONG_MAX, 0LL};
    }
    int mid = l + (r - l) / 2;
    pair<int, int> left = query(2 * node, l, mid, ll, rr);
    pair<int, int> right = query(2 * node + 1, mid + 1, r, ll, rr);
    int mm = min(left.first, right.first);
    int cnt = 0;
    if (mm == left.first)
        cnt += left.second;
    if (mm == right.first)
        cnt += right.second;
    return {mm, cnt};
}

void solve() {
    int n, q;
    cin >> n >> q;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    build(1, 1, n);
    // for(int i=1;i<2*n;i++)cout<<i<<" -- "<<seg[i].first<<" ,
    // "<<seg[i].second<<nl;
    //  nf;nf;
    while (q--) {
        int x;
        cin >> x;
        if (x == 1) {
            int idx, val;
            cin >> idx >> val;

            update(1, 1, n, idx+1, val);
        }
        // for(int i=1;i<2*n;i++)cout<<i<<" -- "<<seg[i].first<<" ,
        // "<<seg[i].second<<nl;
        else {
            int l, r;
            cin >> l >> r;
            pair<int, int> ans = query(1, 1, n, l + 1, r);
            cout << ans.first << ' ' << ans.second << nl;
        }
    }
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    // cin>>t;
    while (t--) {
        solve();
    }
    return 0;
}