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
 
vi a[100001];
vi b;
int vis[100001];
void go(int n)
{
    cout<<n<<" ";
    vis[n]++;
    forn(i,a[n].size()) if(!vis[a[n][i]]) b.eb(a[n][i]),vis[a[n][i]]++;
    int m;
    if(b.size()>0){
        vector<int>::iterator it;
        it = min_element(all(b));
        m=*it;
        b.erase(it);
    }
    else return;
    
    go(m); 
}
 
int32_t main(){
    ios::sync_with_stdio(false);cin.tie(nullptr);
    cout.precision(10);cout<<fixed;
#ifndef ONLINE_JUDGE
    freopen("input.txt","rt",stdin);
#endif
 
    int n,m,x,y;
    cin>>n>>m;
    forn(i,m){
        cin>>x>>y;
        a[x].eb(y);
        a[y].eb(x);
    }
    go(1);
    cout<<endl;
 
#ifndef ONLINE_JUDGE
    cerr<<"Time:"<<1.0*clock()/CLOCKS_PER_SEC<<"s.\n";
#endif
    return 0;
}