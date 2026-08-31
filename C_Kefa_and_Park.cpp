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
    vector<int> a(n+1);
    for(int i=1;i<=n;i++)cin>>a[i];

    vector<int> adj[n+1];
    for(int i=0;i<n-1;i++){
        int u,v; cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
  
    vector<int> lef;
    for(int i=2;i<=n;i++){
        if(adj[i].size()==1)lef.push_back(i);
    }
    vector<int> path(n+1,-1),vis(n+1);
    queue<int> q;
    q.push(1);
    vis[1]=1;
    while(!q.empty()){
        int node=q.front();
        q.pop();
        for(auto u:adj[node]){
            if(vis[u])continue;
            q.push(u);
            vis[u]=1;
            path[u]=node;
        }
    }
    int cnt=0;
    vector<bool> viss(n+1,false);
    for(auto i:lef){    
        int car=i;
        int cc=0;
        while(1){
            if(car==-1){cnt++;break;}
           if(viss[car])break;

            if(a[car])cc+=1;
            else cc=0;

            if(cc > m){
                vector<int > aa;
                for(;i!=car ;i=path[i])aa.push_back(i);
                for(int k=0;k<aa.size()-m;k++)viss[aa[k]]=true;
                break;
            }
            car=path[car];

        }
    }
    cout<<cnt<<nl;
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--){solve();}
    return 0;
}