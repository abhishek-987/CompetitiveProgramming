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
int a[1000010];
long long cnt[1000010];

int32_t main(){
    ios::sync_with_stdio(false);cin.tie(nullptr);
    cout.precision(10);cout<<fixed;
#ifndef ONLINE_JUDGE
    freopen("input.txt","rt",stdin);
#endif

    int n;
    cin>>n;
    ll s = 0;
    forn(i,n){
        cin>>a[i];
        s+=a[i];
    }
    if (s%3!=0)
        cout<<"0"<<endl;
    else {
        s/=3;
        ll ss=0;
        for(int i=n-1;i>=0;--i){
            ss+=a[i];
            if(ss==s)
                cnt[i]=1;
        }
        for(int i=n-2;i>=0;--i)
            cnt[i]+=cnt[i+1];
        
        ll ans=0;
        ss=0;
        for(int i=0;i+2<n;++i){
            ss+=a[i];
            if(ss==s)
                ans+=cnt[i+2];
        }
        cout<<ans<<"\n";
    }

#ifndef ONLINE_JUDGE
    cerr<<"Time:"<<1.0*clock()/CLOCKS_PER_SEC<<"s.\n";
#endif
    return 0;
}