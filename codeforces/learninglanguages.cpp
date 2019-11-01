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
 
vvi a(300);
int b[300];
 
void go(int x){
    if(b[x]==0) b[x]++;
    else return;
    forn(i,a[x].size()) go(a[x][i]);
}
 
int32_t main(){
    ios::sync_with_stdio(false);cin.tie(nullptr);
    cout.precision(10);cout<<fixed;
#ifndef ONLINE_JUDGE
    freopen("input.txt","rt",stdin);
#endif
 
    int n,m,x,y,ans=-1,f=0;
    cin>>n>>m;
    forn(i,n){
        cin>>x;
        f=f|x;
        forn(j,x){
            cin>>y;
            a[i+1].eb(n+y);
            a[n+y].eb(i+1);
        }
    }
    if(f!=0){
        forn(i,n){
 
            if(!b[i+1]){
                //cout<<i+1<<endl;
                ans++, go(i+1);
            }
            else continue;
        }
        cout<<ans<<endl;
    }else cout<<n<<endl;
#ifndef ONLINE_JUDGE
    cerr<<"Time:"<<1.0*clock()/CLOCKS_PER_SEC<<"s.\n";
#endif
    return 0;
}