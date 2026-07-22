#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define nf cout<<'\n'
#define int long long
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
const int N=1e6+100;
vector<bool> isprime(N,true);
void sieve(){
    isprime[0]=isprime[1]=false;
    for(int i=2;i*i<=N;i++){
        if(!isprime[i])continue;
        for(int j=i+i;j<N;j+=i){
            isprime[j]=false;
        }
    }
}

void solve(){
    int n;cin>>n;
    int sq=sqrt(n);
    if(sq*sq==n && isprime[sq])cy;
    else cn;

}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    sieve();
    int t=1;
    cin>>t;
    while(t--){solve();}
    return 0;
}