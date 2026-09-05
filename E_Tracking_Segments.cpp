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
vector<int> seg(4 * N);

void build(int n,int l,int r){
    if(l==r){
        seg[n]=0;
        return;
    }
    int mid=l+(r-l)/2;
    build(2*n,l,mid);
    build((2*n)+1,mid+1,r);
    seg[n]=seg[2*n]+seg[2*n+1];
}
void update(int n,int l,int r,int idx){
    if(l==r){
        seg[n]=1;
        return;
    }
    int mid=l+(r-l)/2;
    if(l<=idx && mid>=idx) update(2*n,l,mid,idx);
    else if(mid<idx && r>=idx)update(2*n+1,mid+1,r,idx);
    else return;
    seg[n]=seg[2*n]+seg[2*n+1];
}
int query(int node, int l, int r, int ll, int rr) {
    if (l >= ll && rr >= r) {
        return seg[node];
    }
    if (l > rr || r < ll)
        return 0;
    int mid = l + (r - l) / 2;
    int left = query(node * 2, l, mid, ll, rr);
    int right = query(node * 2 + 1, mid + 1, r, ll, rr);
    return (left + right);
}

void solve() {
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> mm(m + 1);
    for (int i = 1; i <= m; i++)
        cin >> mm[i].first >> mm[i].second;
    int q;
    cin >> q;
    vector<int> a(q + 1);
    for (int i = 1; i <= q; i++)
        cin >> a[i];
    auto ok = [&](int mid) {
        build(1, 1, n);   
        for (int i = 1; i <= mid; i++) {
            update(1,1,n,a[i]); 
        }
        bool okk = false;
        for (int i = 1; i <= m; i++) {
            int cnt = query(1, 1, n, mm[i].first, mm[i].second);
            if ((mm[i].second-mm[i].first+1)<(cnt*2)) {
                okk = true;
                break;
            }
        }
        return okk;
    };
    int l = 1, r = q, mid, ans = -1;
    while (l <= r) {
        int mid = l + (r - l) / 2;
        if (ok(mid)) {
            ans = mid;
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    cout << ans << nl;
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}