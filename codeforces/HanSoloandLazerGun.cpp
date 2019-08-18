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
 
map<pair<int,int>,int>m;
 
int32_t main(){
    ios::sync_with_stdio(false);cin.tie(nullptr);
    cout.precision(10);cout<<fixed;
#ifndef ONLINE_JUDGE
    freopen("input.txt","rt",stdin);
#endif
 
    int n,x0,y0; cin>>n>>x0>>y0;
    int x1,y1,f=0;
    while(n--){
        cin>>x1>>y1;
        int d1=y1-y0;
        int d2=x1-x0;
        int gc=__gcd(d1,d2);
        d1=d1/gc;
        d2=d2/gc;
        //cout<<d1<<" "<<d2<<endl;
        if (m[{ d1, d2 }] == 0) m[{d1,d2}]++,f++;
    }
    cout<<f<<endl;
 
#ifndef ONLINE_JUDGE
    cerr<<"Time:"<<1.0*clock()/CLOCKS_PER_SEC<<"s.\n";
#endif
    return 0;
}