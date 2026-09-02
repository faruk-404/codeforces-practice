// #include <bits/stdc++.h>
// using namespace std;

// #define nl '\n'
// #define nf cout<<'\n'
// #define int long long
// #define cy cout << "YES\n"
// #define cn cout << "NO\n"
// #define all(v) v.begin(),v.end()
// #define rall(v) v.rbegin(),v.rend()

// const int MAXN = 200005;
// int seg[4 * MAXN];

// void build(int node, int l, int r, vector<int> &a) {
//     if (l == r) {
//         seg[node] = a[l];
//         return;
//     }
//     int mid = (l + r) / 2;
//     build(2 * node, l, mid, a);
//     build(2 * node + 1, mid + 1, r, a);
//     seg[node] = seg[l] + seg[r];
// }

// long long query(int node, int l, int r, int ql, int qr) {
//     if (qr < l || r < ql) return 0;
//     if (ql <= l && r <= qr) return seg[node];

//     int mid = (l + r) / 2;
//     return query(2 * node, l, mid, ql, qr) +
//            query(2 * node + 1, mid + 1, r, ql, qr);
// }

// void update(int node, int l, int r, int idx, int val) {
//     if (l == r) {
//         seg[node] = val;
//         return;
//     }

//     int mid = (l + r) / 2;
//     if (idx <= mid)
//         update(2 * node, l, mid, idx, val);
//     else
//         update(2 * node + 1, mid + 1, r, idx, val);

//     seg[node] = seg[2 * node] + seg[2 * node + 1];
// }

// void solve(){
    
// }
// int32_t main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int t=1;
//     cin>>t;
//     while(t--){solve();}
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define nf cout<<'\n'
#define int long long
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
const int  N=2e5+5;
vector<int> a(N);
vector<int> seg(4*N);
void build(int n,int l,int r){
    if(l==r){
        seg[n]=a[l];
        return;
    }
    int mid=l+(r-l)/2;
    build(2*n,l,mid);
    build((2*n)+1,mid+1,r);
    seg[n]=seg[2*n]+seg[2*n+1];
}

void solve(){
    int n;cin>>n;
    for(int i=1;i<=n;i++)cin>>a[i];
    build(1,1,8);
    for(int i=1;i<=n;i++)cout<<a[i]<<' ';
    cout<<'\n';
    for(int i=1;i<2*n;i++)cout<<seg[i]<<' ';
    cout<<'\n';
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--){solve();}
    return 0;
}