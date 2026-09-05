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
    int n,m; cin>>n>>m;
    vector<int>a(n);
    for(auto &i:a) cin>>i;

    string s;cin>>s;
    int l=-1,r=n;
    vector<int> ans;
    for(int i=0;i<n;i++){
        if(s[i]=='L') l++;
        else r--;
    }
    int an=1;
    for(int i=n-1;i>=0;i--){
        if(s[i]=='L'){
           an*= a[l--];
        }else an*=a[r++];
        an%=m;
        ans.push_back(an);
    }
    reverse(all(ans));
    for(auto i:ans)cout<<i<<' ';
    cout<<'\n';

}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--){solve();}
    return 0;
}