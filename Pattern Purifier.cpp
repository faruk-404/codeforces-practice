#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define nf cout << '\n'
#define ll long long
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define all(v) v.begin(), v.end()
const int N = 3e5 + 5;

void solve() {
    string s;
    cin >> s;
    if ((s.size() & 1)) {
        cn;
        return;
    }
    stack<char> st;
    for (auto c : s) {
        if (!st.empty() && st.top() == c) st.pop();
        else st.push(c);
    }
    if (!st.empty()) cn;
    else cy;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}