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
    int n;cin>>n;
    vector<int> adj[n+1];
    for(int i=0;i<n-1;i++){
        int u,v;cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<int> bi(n+1),vis(n+1);
    queue<int> q;
    q.push(1);
    bi[1]=1;
    vis[1]=1;
    while(!q.empty()){
        int node=q.front();
        q.pop();
        for(auto u:adj[node]){
            if(vis[u])continue;
            q.push(u);
            bi[u]=(bi[node]^1);
            vis[u]=1;
        }
    }
    int ze=count(bi.begin(),bi.end(),0)-1;
    int on=count(bi.begin(),bi.end(),1);
    cout<<(ze*on)-(n-1)<<nl;

}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--){solve();}
    return 0;
}