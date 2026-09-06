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
    vector<int> par,rnk,siz;
    int c;
    dsu(int n):par(n+1),rnk(n+1,0),siz(n+1,1),c(n){
        for(int i=1;i<=n;i++)par[i]=i;
    }
    
    int find(int i){
        if(par[i]==i) return i;
        return par[i]=find(par[i]);
    }
    bool same(int u,int v){
        return find(u)==find(v);
    }
    int  getsize(int u){
        return siz[find(u)];
    }
    int cnt(){
        return c;
    }
    void merge(int u,int v){
        if((u=find(u))==(v=find(v))){
            return;
        }else {
            c--;
        }
        if(rnk[u]>rnk[v]){
            swap(u,v);
        }else if(rnk[u]==rnk[v]){
            rnk[v]+=1;
        }
        par[u]=v;
        siz[v]+=siz[u];
    }
};

void solve(){
    int n,m;cin>>n>>m;
    dsu d(n);
    for(int i=1;i<=m;i++){
        string s;cin>>s;
        int u,v;cin>>u>>v;
        if(s=="union"){
            d.merge(u,v);
        }else {
            if(d.same(u,v))cy;
            else cn;
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