#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define nf cout<<'\n'
#define int long long
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()

const int N=2e6+5,mod=998244353;
vector<int> fact(N+5,1);
void fun(){
    for(int i=2;i<N;i++){
        fact[i]=(i*fact[i-1])%mod;
    }
}
int bigmod(int a,int b){
    if(b==0)return 1LL;
    int tmp=bigmod(a,b/2)%mod;
    tmp=(tmp*tmp)%mod;
    if(b&1){
        tmp=(tmp*a)%mod;
    }
    return tmp;
}
int nCr(int n,int r){
    return (fact[n]*bigmod((fact[r]*fact[n-r])%mod,mod-2))%mod;
}
void solve(){
    int n,m,k;cin>>n>>m>>k;
    cout<<(((nCr(n-1,k)*m)%mod)*bigmod(m-1,k))%mod<<nl;

    
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    fun();
    int t=1;
    // cin>>t;
    while(t--){solve();}
    return 0;
}