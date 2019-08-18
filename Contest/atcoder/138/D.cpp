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
vll v[200001];
ll a[200001];
ll n,q;
 
void go(ll ver, ll baap, ll val)
{
    a[ver]+=val;
    forn(i,v[ver].size()){
 
        if(v[ver][i]==baap) continue;
        else go(v[ver][i],ver,a[ver]);
 
    }
 
 
}
 
 
int32_t main(){
    ios::sync_with_stdio(false);cin.tie(nullptr);
    cout.precision(10);cout<<fixed;
 
 
    cin>>n>>q;
    
    ll x,y;
    for1(i,n-1){
        cin>>x>>y;
        v[x-1].eb(y-1);
        v[y-1].eb(x-1);
    }
    for1(i,q){
        cin>>x>>y;
        a[x-1]+=y;
    }
 
    go(0,-1,0);
 
 
    forn(i,n) cout<<a[i]<<" ";
    cout<<endl;
 
    return 0;
}