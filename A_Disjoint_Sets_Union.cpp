#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define nf cout<<'\n'
#define int long long
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()

 
struct DSU{
    vector<int> par,rnk,siz;
    int c;
    DSU(int n): par(n+1),rnk(n+1,0),c(n),siz(n+1,1){
        for(int i=1;i<=n;i++){
            par[i]=i;
        }
    }
    int find(int i){
        if(par[i]==i){
            return i;
        } else{
            return par[i]=find(par[i]);
        }
    }
    
    bool same(int u,int v){
        return (find(u)==find(v));
    }
    int getsize(int u){
        return siz[find(u)];
    }
    int cnt(){
        return c;
    }
    void merge(int u,int v){
        if((u=find(u))== (v=find(v))){
            return;
        }else{
            c--;
        }
        if(rnk[u]>rnk[v]){
            swap(u,v);
        }else if(rnk[u]==rnk[v]){
            rnk[v]++;
        }
        par[u]=v;
        siz[v]+=siz[u];
    }
};
void solve(){
    int n,m;cin>>n>>m;
    DSU D(n);
    for(int i=1;i<=m;i++){
        string query;
        int u,v;cin>>query>>u>>v;
        if(query=="union"){
            D.merge(u,v);
        }else{
            (D.same(u,v))?cy:cn;
        }
    }

    cout<<D.cnt()<<nl;
    
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--){solve();}
    return 0;
}