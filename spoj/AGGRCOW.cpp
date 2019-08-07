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
ll n,c;
ll a[100001];
int check(ll mid){
    ll pv=0;
    ll C=1;
    forn(i,n){
        if(i>0&&a[i]-a[pv]>=mid){
            C++;
            pv=i;
        }
        if(C==c) break;
    }
    return (C==c)?1:0;
}
 
 
int32_t main(){
    ios::sync_with_stdio(false);cin.tie(nullptr);
    cout.precision(10);cout<<fixed;
#ifndef ONLINE_JUDGE
    freopen("input.txt","rt",stdin);
#endif
 
    ll t; cin>>t;
    while(t--){
        cin>>n>>c;
        forn(i,n) cin>>a[i];
        sort(a,a+n);
        ll fni=a[n-1]-a[0], ini=0, ans=21, mid;
        while(ini<=fni){
            mid=ini+(fni-ini)/2;
            //che(mid);
            if(check(mid)){
                ans=mid;
                ini=mid+1;
            }
            else
                fni=mid-1;
        }
        cout<<ans<<endl;
    }
 
#ifndef ONLINE_JUDGE
    cerr<<"Time:"<<1.0*clock()/CLOCKS_PER_SEC<<"s.\n";
#endif
    return 0;
}
