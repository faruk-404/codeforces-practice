#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define nf cout<<'\n'
#define ll long long
#define int long long
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define all(v) v.begin(),v.end()

void solve(){
    int n,m;cin>>n>>m;
    vector<vector<int>> a(n,vector<int>(m));
    for(auto &i:a)for(auto &j:i)cin>>j;
    
    int row=0,col=0,mx=-1;
    for(int i=0;i<n;i++){
        int xr=0;
        for(int j=0;j<m;j++){
            xr^=a[i][j];
        }
        if(xr>mx){
           row=i;
           mx =xr;
        }
    }
    int colxr=mx;
    mx=-1;
    for(int i=0;i<m;i++){
        int xr=0;
        for(int j=0;j<n;j++){
            xr^=a[j][i];
        }
        if(xr>mx){
           col=i;
           mx =xr;
        }
    }
    int rowxr=mx;
    colxr^=a[row][col];
    rowxr^=a[row][col];
    a[row][col] = (colxr&rowxr);    
    int ans=0;
    for(int i=0;i<n;i++){
        int xr=0;
        for(int j=0;j<m;j++){
            xr^=a[i][j];
        }
       ans+=xr;
    }
    for(int i=0;i<m;i++){
        int xr=0;
        for(int j=0;j<n;j++){
            xr^=a[j][i];
        }
        ans+=xr;
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