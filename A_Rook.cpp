#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define nf cout << '\n'
#define int long long
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()

void solve() {
    string s;
    cin >> s;
    char a = s[0], b = s[1];
    int t = b - '0';
    set<string> st;
    for (int i = 1; i < 9; i++) {
        string ss = "";
        ss += a;
        ss += char(i + '0');
        st.insert(ss);
    }
    for (char i = 'a'; i < 'i'; i++) {
        string ss = "";
        ss += i;
        ss += b;
        st.insert(ss);
    }
    st.erase(s);
    for (auto i : st)
        cout << i << nl;
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