#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define nf cout<<'\n'
#define int long long
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()

void solve(){
    int n,k;cin>>n>>k;
    set<int> st;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        st.insert(x);
    }
    while(k--){
        int x;cin>>x;
        if(st.find(x)!=st.end())cy;
        else cn;
    }
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--){solve();}
    return 0;
}