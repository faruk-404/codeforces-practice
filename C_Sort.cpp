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
   int n,q;cin>>n>>q;
   string s,t;cin>>s>>t;
   while(q--){
    int l,r;cin>>l>>r;
    vector<char> st(26);
    for(int i=l-1;i<r;i++){
        st.insert(s[i]);
        
    }
    for(int i=l-1;i<r;i++){
        auto it=st.find(t[i]);
        if(it!=st.end())st.erase(it);
    }

    cout<<st.size()<<nl;
   }
   
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    // #endif
    int t=1;
    cin>>t;
    while(t--){solve();}
    return 0;
}