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
    vector<int> par,rnk,siz,mm,mx;
    int c;
    dsu(int n):par(n+1),rnk(n+1),siz(n+1,1),mm(n+1),mx(n+1),c(n){
        for(int i=1;i<=n;i++) par[i]=mm[i]=mx[i]=i;
    }
    int find(int node){
        if(node==par[node]){
            return node;
        }
        return par[node]=find(par[node]);
    }
    int getsize(int node){
        return siz[find(node)];
    }
    bool same(int u,int v){
        return (find(u)==find(v));
    }
    int cnt(){
        return c;
    }
    void mearg(int u,int v){
        if((u=find(u))==(v=find(v))) return;
        else c--;
        if(rnk[u]>rnk[v]){
            swap(u,v);
        }else if(rnk[u]==rnk[v]){
            rnk[v]++;
        }
        par[u]=v;
        siz[v]+=siz[u];
        mm[v]=min(mm[v],mm[u]);
        mx[v]=max(mx[v],mx[u]);
    }
};
void solve(){
    int n,m;cin>>n>>m;
    dsu d(n);
    for(int i=0;i<m;i++){
        string s;cin>>s;
        if(s=="union"){
            int u,v;cin>>u>>v;
            d.mearg(u,v);
        }else{
            int u;cin>>u;
            u=d.find(u);
            cout<<d.mm[u]<<' '<<d.mx[u]<<' '<<d.getsize(u)<<nl;            
        }
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