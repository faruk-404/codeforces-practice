#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define nf cout<<'\n'
#define int long long
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()

const int N=1e6;
vector<bool> is(N,false);
vector<int> prime;

void sieve(){
    for(int i=3;i*i<=N;i+=2){
        if(is[i])continue;
        for(int j=i*i;j<=N;j+=i+i){
            is[j]=true;
        }
    }
    prime.push_back(2);
    for(int i=3;i<=N;i+=2){
        if(!is[i])prime.push_back(i);
    }
}


void solve(){
    int d;cin>>d;
    // for(auto i:prime)cout<<i<<' ';

    auto it=lower_bound(all(prime),d+1);
    auto it2=lower_bound(all(prime),(*it)+d);
    cout<<(*it)*(*it2)<<nl;
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