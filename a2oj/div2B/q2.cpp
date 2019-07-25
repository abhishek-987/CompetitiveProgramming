    #include <bits/stdc++.h>
    #define fi first
    #define se second
    #define eb emplace_back
    #define um unordered_map
    #define all(x) (x).begin(),(x).end()
    #define forn(i,n) for(int i=0;i<int(n);++i)
    #define for1(i,n) for(int i=1;i<=int(n);++i)
    using namespace std;
    typedef long double ld;typedef long long ll;
    typedef vector<int> vi;typedef vector<pair<int, int>> vpi;typedef vector<vi> vvi;
    typedef vector<ll> vll;typedef vector<vll> vvll;typedef vector<pair<ll, ll>> vpll;
    const ll MOD=1e9+7,INF=1e18;
    void check(int num){cerr<<"error"<<" "<<num<<"\n";}
    /********************************************************************************/
     
     
     
    int32_t main(){
        ios::sync_with_stdio(false);cin.tie(nullptr);
        cout.precision(10);cout<<fixed;
    #ifndef ONLINE_JUDGE
        freopen("input.txt","rt",stdin);
    #endif
        
        ll n,m;
        cin>>n>>m;
        ll f=1,ans=0;
        while(m--){
            ll x;
            cin>>x;
            if(x>=f)
                ans+=x-f;
            else{
                ans+=n-f;
                ans+=x-0;
            }
            f=x;
        }
        cout<<ans<<endl;
     
    #ifndef ONLINE_JUDGE
        cerr<<"Time:"<<1.0*clock()/CLOCKS_PER_SEC<<"s.\n";
    #endif
        return 0;
    }