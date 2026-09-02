#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define nf cout << '\n'
#define ll long long
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()

int solve(vector<int> &p, int l, int r) {
    if (l == r)
        return 0;

    int mid = l + (r - l) / 2;
    int left = solve(p, l, mid);
    int right = solve(p, mid + 1, r);

    if (left == -1 || right == -1) {
        return -1;
    }

    int left_min = *min_element(p.begin() + l, p.begin() + mid + 1);
    int left_max = *max_element(p.begin() + l, p.begin() + mid + 1);

    int right_min = *min_element(p.begin() + mid + 1, p.begin() + r + 1);
    int right_max = *max_element(p.begin() + mid + 1, p.begin() + r + 1);

    if (left_max < right_min) {
        return left + right;
    }
    if (right_max < left_min) {
        for (int i = l; i <= mid; i++) {
            swap(p[i], p[i + (mid - l + 1)]);
        }
        return left + right + 1;
    }
    return -1;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int m;
        cin >> m;
        vector<int> p(m);
        for (auto &i : p)
            cin >> i;

        int op = solve(p, 0, m - 1);
        cout << op << endl;
    }
    return 0;
}