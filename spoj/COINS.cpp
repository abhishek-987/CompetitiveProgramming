#include <bits/stdc++.h>
#define fi first
#define se second
#define eb emplace_back
#define um unordered_map
#define all(x) (x).begin(),(x).end()
#define forn(i,n) for(int i=0;i<int(n);++i)
#define for1(i,n) for(int i=1;i<=int(n);++i)
#define che(x) cout<<#x<<" having "<<x<<endl
using namespace std;
typedef long double ld;typedef long long ll;
typedef vector<int> vi;typedef vector<pair<int, int>> vpi;typedef vector<vi> vvi;
typedef vector<ll> vll;typedef vector<pair<ll, ll>> vpll;typedef vector<vll> vvll;
template<class T>bool uin(T &a,T b){return a>b?(a=b,true):false;}
template<class T>bool uax(T &a,T b){return a<b?(a=b,true):false;}
const ll MOD=1e9+7,INF=1e18;
/********************************************************************************/
 
ll dp[100000],vis[100000];
ll go(ll n){
    ll ans=0;
    if(n<100000&&vis[n])
        return dp[n];
    ans=go(n/2)+go(n/3)+go(n/4);
    if(ans>n){
        if(n<100000){
            vis[n]=1;
            dp[n]=ans;
        }
        return ans;
    }else{
        if(n<100000){
            vis[n]=1;
            dp[n]=n;
        }
        return n;
    }
}
 
int32_t main(){
    ios::sync_with_stdio(false);cin.tie(nullptr);
    cout.precision(10);cout<<fixed;
#ifndef ONLINE_JUDGE
    freopen("input.txt","rt",stdin);
#endif
 
    ll n;
    dp[0]=0, vis[0]=1;
    while(cin>>n){
        cout<<go(n)<<endl;
    }
 
#ifndef ONLINE_JUDGE
    cerr<<"Time:"<<1.0*clock()/CLOCKS_PER_SEC<<"s.\n";
#endif
    return 0;
}