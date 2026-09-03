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
vector<int>a(N);
vector<int> seg(4*N,LLONG_MAX);

void build(int node,int l,int r){
    if(l==r){
        seg[node]=a[l];
        return;
    }
    int mid=l+(r-l)/2;
    build(node*2,l,mid);
    build(node*2+1,mid+1,r);
    seg[node]=min(seg[node*2],seg[node*2+1]);
}

void update(int node,int l,int r,int idx,int val){
    if(l==r){
        seg[node]=val;
        return;
    }
    int mid=l+(r-l)/2;
    if(idx>=l && idx<=mid)update(node*2,l,mid,idx,val);
    else update(node*2+1,mid+1,r,idx,val);
    seg[node]=min(seg[node*2],seg[node*2+1]);
}

int  query(int node,int l,int r,int ll,int rr){
    if(l>=ll && r<=rr)return seg[node];
    if(l>rr || r<ll) return LLONG_MAX;
    int mid=l+(r-l)/2;
    int left=query(node*2,l,mid,ll,rr);
    int right=query(node*2+1,mid+1,r,ll,rr);
    return min(left,right);
}
void solve(){
    int n,k;cin>>n>>k;
    for(int i=1;i<=n;i++) cin>>a[i];
    build(1,1,n);
    while(k--){
        int x;cin>>x;
        if(x==1){
            int idx,val;cin>>idx>>val;
            update(1,1,n,idx+1,val);
        }else{
            int l,r;cin>>l>>r;
            cout<<query(1,1,n,l+1,r)<<nl;
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