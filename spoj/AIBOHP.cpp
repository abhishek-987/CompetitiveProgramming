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
 
string s;
ll dp[6101][6101];
 
ll go(ll ini, ll fni){
    
    if(ini>=fni)
        return 0;
    if(dp[ini][fni]!=-1)
        return dp[ini][fni];
    if(s[ini]==s[fni])
        return dp[ini][fni]=go(ini+1,fni-1);
    else
        return dp[ini][fni]=min(1+go(ini+1,fni),1+go(ini,fni-1));
 
}
 
int32_t main(){
    ios::sync_with_stdio(false);cin.tie(nullptr);
    cout.precision(10);cout<<fixed;
#ifndef ONLINE_JUDGE
    freopen("input.txt","rt",stdin);
#endif
    ll t;
    cin>>t;
    while(t--){
        cin>>s;
        memset(dp,-1,sizeof(dp));
        cout<<go(0,s.length()-1)<<endl;
    }
 
 
 
#ifndef ONLINE_JUDGE
    cerr<<"Time:"<<1.0*clock()/CLOCKS_PER_SEC<<"s.\n";
#endif
    return 0;
} 