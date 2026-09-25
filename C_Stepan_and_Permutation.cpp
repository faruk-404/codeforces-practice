#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define nf cout<<'\n'
#define int long long
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()

void abc(vector<int> &pos,int k,int &mm ,int x){
    if(k>=pos.size()){
        return;
    }
    mm=min(mm,pos[k]);
    abc(pos,k+x,mm,x);
    pos[k]=mm;
}

void solve(){
    int n,x,y;cin>>n>>x>>y;
    vector<int> a(n);
    for(auto &i:a)cin>>i;
    vector<int > pos(n+1);
    for(int i=0;i<n;i++)pos[i]=i;
    abc(pos,0,pos[0],x);
    abc(pos,0,pos[0],y);
    for(int i=0;i<n;i++){
        if(pos[i]!=i)continue;
        abc(pos,i,pos[i],x);
        abc(pos,i,pos[i],y);
    }
    for(auto i:pos)cout<<i<<' ';nf;    
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--){solve();}
    return 0;
}