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
     
    int n,m,k;
    unsigned int countSetBits(unsigned int x) 
    { 
        unsigned int count = 0; 
        int i=0;
        while(x&&i!=n) 
        { 
            count += x & 1; 
            x >>= 1;
            i++; 
        } 
        return count; 
    } 
     
    int32_t main(){
        ios::sync_with_stdio(false);cin.tie(nullptr);
        cout.precision(10);cout<<fixed;
    #ifndef ONLINE_JUDGE
        freopen("input.txt","rt",stdin);
    #endif
        
        //int n,n,k;
        cin>>n>>m>>k;
        vi v;
        while(m--){
            int x;
            cin>>x;
            v.eb(x);
        }
        int x,g=0;
        cin>>x;
        forn(i,v.size()){
            if(countSetBits(x^v[i])<=k)
                g++;
        }
        cout<<g<<endl;
     
    #ifndef ONLINE_JUDGE
        cerr<<"Time:"<<1.0*clock()/CLOCKS_PER_SEC<<"s.\n";
    #endif
        return 0;
    }