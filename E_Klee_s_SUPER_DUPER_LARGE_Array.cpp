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
    int n,k;cin>>n>>k;
    int st=k,en=n+k-1;

    auto sum=[&](int l,int r){
        return ((r*(r+1))/2)-((l*(l-1))/2);
    };

    auto ok=[&](int mid){
        int sum1=sum(st,mid);
        int sum2=sum(mid+1,en);
        return sum1>=sum2;
    };

    int l=st, r=en, mid, ans;
    while(l<=r){
        mid=l+(r-l)/2;
        if(ok(mid)){
            ans=mid;
            r=mid-1;
        }else{
            l=mid+1;
        }
    }
    
    int anss=min(abs(sum(st,ans)-sum(ans+1,en)),abs(sum(st,ans-1)-sum(ans,en)));
    cout<<anss<<nl;
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--){solve();}
    return 0;
}