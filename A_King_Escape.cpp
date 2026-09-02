#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define nf cout << '\n'
#define ll long long
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()

int main() {
    ios::sync_with_stdio(false);w
    cin.tie(nullptr);

    int n;
    cin >> n;
    int ax, ay, bx, by, cx, cy;
    cin >> ax >> ay >> bx >> by >> cx >> cy;
    if (((bx < ax && cx < ax) || (bx > ax && cx > ax)) &&
        ((by < ay && cy < ay) || (by > ay && cy > ay))) {
        cout << "YES";
    } else
        cout << "NO";
    return 0;
}