#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define int long long

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (auto &i : a) cin >> i;

    vector<int> stamp(n + 2, 0);   // কোন "অংশে" শেষবার দেখা হয়েছে
    int curStamp = 0;

    auto ok = [&](int mid) -> bool {
        if (mid == 0) return true;          // MEX ≥ 0 সবসময় সত্য
        if (mid > n) return false;
        int cnt = 0, have = 0;
        curStamp++;
        for (int x : a) {
            if (x < mid && stamp[x] != curStamp) {
                stamp[x] = curStamp;
                have++;
                if (have == mid) {          // এই অংশে 0..mid-1 সব আছে
                    cnt++;
                    if (cnt >= k) return true;
                    curStamp++;             // O(1) রিসেট
                    have = 0;
                }
            }
        }
        return false;
    };

    int l = 0, r = n, ans = 0;
    while (l <= r) {
        int mid = l + (r - l) / 2;
        if (ok(mid)) { ans = mid; l = mid + 1; }
        else r = mid - 1;
    }
    cout << ans << nl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    cin >> t;
    while (t--) solve();
}