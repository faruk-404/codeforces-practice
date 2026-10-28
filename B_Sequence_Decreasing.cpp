#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define nf cout<<'\n'
#define ll long long
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define all(v) v.begin(),v.end()
const int N=3e5+5;


// #define LOCAL
// #ifdef LOCAL
// template <typename T> void __print(const T &x);
// template <typename T, typename V> void __print(const pair<T, V> &x);

// void __print(int x)                { cerr << x; }
// void __print(long long x)          { cerr << x; }
// void __print(unsigned x)           { cerr << x; }
// void __print(unsigned long long x) { cerr << x; }
// void __print(float x)              { cerr << x; }
// void __print(double x)             { cerr << x; }
// void __print(long double x)        { cerr << x; }
// void __print(bool x)               { cerr << (x ? "true" : "false"); }
// void __print(char x)               { cerr << '\'' << x << '\''; }
// void __print(const char *x)        { cerr << '"' << x << '"'; }
// void __print(const string &x)      { cerr << '"' << x << '"'; }

// template <typename T, typename V>
// void __print(const pair<T, V> &x) {
//     cerr << '{'; __print(x.first); cerr << ", "; __print(x.second); cerr << '}';
// }

// template <typename T>
// void __print(const T &x) {
//     int f = 0;
//     cerr << '{';
//     for (auto &i : x) cerr << (f++ ? ", " : ""), __print(i);
//     cerr << '}';
// }

// void _print() { cerr << "]\n"; }
// template <typename T, typename... V>
// void _print(T t, V... v) {
//     __print(t);
//     if (sizeof...(v)) cerr << ", ";
//     _print(v...);
// }

// #define dbg(x...) cerr << "[" << #x << "] = [", _print(x)
// #else
// #define dbg(x...)
// #endif


void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto& i : a) cin >> i;
    if((n==1 && a[0]!=0) || ((*min_element(all(a))) >= n)){
        cout << 0 << nl;
        return;
    }
    cout << n << nl;
    return;
    vector<int> x(n), y(n);
    int mx = 0;
    for (int i = 0; i < n;i++){
        if(a[i]==0){
            mx = 0;
            continue;
        }
        mx = max(a[i], mx);
        x[i] = mx;
    }
    for (int i = n-1; i>=0; i--) {
        if (a[i] == 0) {
            mx = 0;
            continue;
        }
        mx = max(a[i], mx);
        y[i] = mx;
    }
    // dbg(x);
    // dbg(y);
    int ans = n;
    for (int i = 0; i < n;i++){
        if (x[i] == 1 && y[i] == 1) ans--;
    }
    cout << ans << nl;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t=1;
    cin>>t;
    while(t--)solve();
    return 0;
}