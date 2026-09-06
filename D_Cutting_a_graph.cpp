#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define nf cout<<'\n'
#define int long long
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()

struct dsu{
    vector<int> par,rnk;
    dsu(int n):par(n+1), rnk(n+1) {
        for(int i=1;i<=n;i++)par[i]=i;
    }
    int find(int node){
        if(node==par[node]) return node;
        return par[node]=find(par[node]);
    }
    bool same(int u,int v){
        return find(u)==find(v);
    }
    void mearg(int u,int v){
        if((u=find(u))==(v=find(v))) return;
        if(rnk[u]>rnk[v]) swap(u,v);
        else if(rnk[u]==rnk[v]) rnk[v]++;
        par[u]=v;
    }
};

void solve(){

    int n,m,k;cin>>n>>m>>k;
    dsu d(n);
    for(int i=1;i<=m;i++){
        int u,v;cin>>u>>v;
    }
    vector<tuple<string, int ,int>> a;
    for(int i=0;i<k;i++){
        string s;cin>>s;
        int u,v;cin>>u>>v;
        a.push_back({s,u,v});
    }
    reverse(all(a));
    vector<string> ans;
    for(auto [s,u,v]:a){
        if(s=="ask"){
            if(d.same(u,v)) ans.push_back("YES");
            else ans.push_back("NO");
        }
        else d.mearg(u,v);
    }
    reverse(all(ans));
    for(auto i:ans)cout<<i<<nl;
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--){solve();}
    return 0;
}