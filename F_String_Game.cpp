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
    string s,t;cin>>s>>t;
    vector<int> a;
    int x;
    while(cin>>x)a.push_back(x);
    auto ok =[&](int mi){
        vector<bool> vis((int)s.size()+1,false);
        for(int i=0;i<mi;i++){
            vis[a[i]]=true;
        }
        int j=0;
        for(int i=0;i<(int)s.size();i++){
            if(t[j]==s[i] && !vis[i+1]){
                j++;
            }
            if(j==(int)t.size()){
                return true;
            }
        }
        return false;

    };
    int l=0,r=(int)s.size(),mid,ans=0;
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