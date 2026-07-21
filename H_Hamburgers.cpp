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
    string ss;cin>>ss;
    int nb,ns,nc;cin>>nb>>ns>>nc;
    int pb,ps,pc;cin>>pb>>ps>>pc;
    int rr;cin>>rr;
    int b,s,c;
    b=count(all(ss),'B');
    s=count(all(ss),'S');
    c=count(all(ss),'C');
    
    auto ok=[&](int mid){
        int tk=0;
        int k=(mid*b)-nb;
        if(k>0) tk+=(k*pb);
        k=(mid*s)-ns;
        if(k>0)tk+=(k*ps);
        k=(mid*c)-nc;
        if(k>0)tk+=(k*pc);
        
        return tk<=rr;
        
    };
    
    int l=0,r=1,mid,ans=0;
    while(ok(r))r*=2;
    //cout<<r<<nl;
    while(l<=r){
        mid=l+(r-l)/2;
        if(ok(mid)){
            ans=mid;
            l=mid+1;
        }else{
            r=mid-1;
        }
    }
    cout<<ans<<nl;
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--){solve();}
    return 0;
}