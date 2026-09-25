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
    int n,m;cin>>n>>m;
    vector<int> a(n);
    for(auto &i:a)cin>>i;
    if(m==1){cout<<*max_element(a.begin(),a.end())<<nl;return;}
    multiset<int> st;
    int sum=0;
    for(int i=0;i<m-1;i++){
        st.insert(a[i]);
        sum+=a[i];
    }
    int mm=sum;
    int ans=(m*a[m-1])-sum;
    
    for(int i=m-1;i<n-1;i++){
        // cout<<ans<<nl;
        sum-=*--st.end();
        st.erase(--st.end());
        sum+=a[i];
        mm=min(sum,mm);
        st.insert(a[i]);
        ans=max((m*a[i+1])-mm,ans);
    }
    cout<<ans<<nl;
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--){solve();}
    return 0;
}