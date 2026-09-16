#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define nf cout << '\n'
#define int long long
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()

const int N = 2e5 + 5, mod = 1e9 + 7;
vector<int> seg(4 * N, 1), lazy(4 * N, 1);

void build(int node, int l, int r) {
    if (l == r) {
        seg[node] = 1;
        return;
    }
    int mid = l + (r - l) / 2;
    build(node * 2, l, mid);
    build(node * 2 + 1, mid + 1, r);
    seg[node] = (seg[node * 2] + seg[node * 2 + 1]) % mod;
}

void push(int node, int l, int r) {
    if (lazy[node] == 1)
        return;
    seg[node] = (seg[node] * lazy[node]) % mod;
    if (l != r) {
        lazy[node * 2] = (lazy[node * 2] * lazy[node]) % mod;
        lazy[node * 2 + 1] = (lazy[node * 2 + 1] * lazy[node]) % mod;
    }
    lazy[node] = 1;
}
void update(int node, int l, int r, int ll, int rr, int val) {
    push(node, l, r);
    if (rr < l || r < ll)
        return;
    if (ll <= l && r <= rr) {
        lazy[node] = (lazy[node] * val) % mod;
        push(node, l, r);
        return;
    }
    int mid = l + (r - l) / 2;
    update(node * 2, l, mid, ll, rr, val);
    update(node * 2 + 1, mid + 1, r, ll, rr, val);
    push(node, l, r);
    seg[node] = ((seg[node * 2] % mod) + (seg[node * 2 + 1] % mod)) % mod;
}
int query(int node, int l, int r, int ll, int rr) {
    push(node, l, r);
    if (rr < l || r < ll)
        return 0;
    if (ll <= l && r <= rr) {
        push(node, l, r);
        return seg[node] % mod;
    }
    int mid = l + (r - l) / 2;
    int left = query(node * 2, l, mid, ll, rr);
    int right = query(node * 2 + 1, mid + 1, r, ll, rr);
    push(node, l, r);
    return (left + right) % mod;
}
void solve() {
    int n, m;
    cin >> n >> m;
    build(1, 1, n);
    for (int i = 1; i <= m; i++) {
        int x;
        cin >> x;
        if (x == 1) {
            int l, r, val;
            cin >> l >> r >> val;
            update(1, 1, n, l + 1, r, val);
        } else {
            int l, r;
            cin >> l >> r;
            cout << query(1, 1, n, l + 1, r) << nl;
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