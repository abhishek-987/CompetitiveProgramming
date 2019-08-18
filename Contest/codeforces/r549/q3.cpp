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
 
 
int32_t main(){
    ios::sync_with_stdio(false);cin.tie(nullptr);
    cout.precision(10);cout<<fixed;
#ifndef ONLINE_JUDGE
    freopen("input.txt","rt",stdin);
#endif
 
    int n; cin>>n;
    int p,c;
    vi v[n+1];
    int a[n+1];
    memset(a,0,sizeof(a));
    for1(i,n){
        cin>>p>>c;
        if(p==-1) continue;
        v[p].eb(i);
        if(c==1) a[i]=1;
    }
    vi b;
    //cout<<"hell"<<endl;
    int j;
    for1(i,n){
 
        if(a[i]==1){
            for(j=0;j<v[i].size();j++) if(a[v[i][j]]!=1) break;
            if(j==v[i].size()) b.eb(i);
        }
 
 
    }
    sort(all(b));
    if(b.size()!=0)
    forn(i,b.size()) cout<<b[i]<<" ";
    else
    cout<<"-1";
    cout<<endl;
 
#ifndef ONLINE_JUDGE
    cerr<<"Time:"<<1.0*clock()/CLOCKS_PER_SEC<<"s.\n";
#endif
    return 0;
}   