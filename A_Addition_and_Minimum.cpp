#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define nf cout << '\n'
#define int long long
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
const int N = 2e5 + 5;
vector<int> seg(4 * N), lazy(N * 4);

void push(int node, int l, int r) {
    if (lazy[node] == 0)
        return;
    seg[node] += lazy[node];
    if (l != r) {
        lazy[node * 2] += lazy[node];
        lazy[node * 2 + 1] += lazy[node];
    }
    lazy[node] = 0;
}
void update(int node, int l, int r, int ll, int rr, int val) {
    push(node, l, r);
    if (l > rr || r < ll)
        return;
    if (ll <= l && r <= rr) {
        lazy[node] += val;
        push(node, l, r);
        return;
    }
    int mid = l + (r - l) / 2;
    update(node * 2, l, mid, ll, rr, val);
    update(node * 2 + 1, mid + 1, r, ll, rr, val);
    seg[node] = min(seg[node * 2], seg[node * 2 + 1]);
}
int query(int node, int l, int r, int ll, int rr) {
    push(node, l, r);

    if (ll <= l && rr >= r)
        return seg[node];
    if (l > rr || r < ll)
        return LLONG_MAX;
    int mid = l + (r - l) / 2;

    int left = query(node * 2, l, mid, ll, rr);
    int right = query(node * 2 + 1, mid + 1, r, ll, rr);
    return min(left, right);
}
void solve() {
    int n, m;
    cin >> n >> m;

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
