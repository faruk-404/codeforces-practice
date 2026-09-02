#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define nf cout << '\n'
#define ll long long
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()

int dx[] = {-1, 0, 1, 0};
int dy[] = {0, -1, 0, 1};

int dfs(int r, int c, vector<vector<int>> &a, int rows, int cols) {
    int sum = a[r][c];
    a[r][c] = 0;

    for (int k = 0; k < 4; k++) {
        int new_r = r + dx[k];
        int new_c = c + dy[k];

        if (new_r >= 0 && new_r < rows && new_c >= 0 && new_c < cols &&
            a[new_r][new_c] > 0) {
            sum += dfs(new_r, new_c, a, rows, cols);
        }
    }
    return sum;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int rows, cols;
        cin >> rows >> cols;
        vector<vector<int>> a(rows, vector<int>(cols));
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cin >> a[i][j];
            }
        }

        int ans = 0;
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (a[i][j] > 0) {
                    int volume = dfs(i, j, a, rows, cols);
                    ans = max(ans, volume);
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}