#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define nf cout<<'\n'
#define int long long
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
const int N=2e5+5;
vector<int> a(N);
vector<int> seg(4*N);

void build(int node,int l,int r,int k){
    if(l==r){
        seg[node]=a[l];
        return;
    }
    int mid=l+(r-l)/2;
    build(node*2,l,mid,k-1);
    build(node*2+1,mid+1,r,k-1);
    if(k&1) seg[node]=(seg[node*2]|seg[node*2+1]);
    else seg[node]=(seg[node*2]^seg[node*2+1]);
}

void update(int node,int l,int r,int k,int idx,int val){
    if(l==r){
        seg[node]=val;
        return;
    }
    int mid=l+(r-l)/2;
    if(idx>=l && idx<=mid)update(node*2,l,mid,k-1,idx,val);
    else update(node*2+1,mid+1,r,k-1,idx,val);
    if(k&1) seg[node]=(seg[node*2]|seg[node*2+1]);
    else seg[node]=(seg[node*2]^seg[node*2+1]);
}


void solve(){
    int n,q;cin>>n>>q;
    for(int i=1;i<=(1<<n);i++)cin>>a[i];
    build(1,1,(1<<n),n);

    for(int i=0;i<q;i++){
        int idx,val; cin>>idx>>val;
        update(1,1,(1<<n),n,idx,val);
        cout<<seg[1]<<nl;

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