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
     
    int a[1000001];
    bool isPrime(int n) 
    { 
        if (n <= 1)  return false; 
        if (n <= 3)  return true; 
      
        if (n%2 == 0 || n%3 == 0) return false; 
      
        for (int i=5; i*i<=n; i=i+6) 
            if (n%i == 0 || n%(i+2) == 0) 
               return false; 
      
        return true; 
    } 
     
    int32_t main(){
        ios::sync_with_stdio(false);cin.tie(nullptr);
        cout.precision(10);cout<<fixed;
    #ifndef ONLINE_JUDGE
        freopen("input.txt","rt",stdin);
    #endif
     
        ll t,x;
        cin>>t;
        for(int i=1;i<1000002;i++)
            if(isPrime(i))
                a[i]++;
        while(t--){
            cin>>x;
            ld f=sqrt(1.0*x);
            if(f==int(f)&&a[int(f)]==1)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
     
        }
     
    #ifndef ONLINE_JUDGE
        cerr<<"Time:"<<1.0*clock()/CLOCKS_PER_SEC<<"s.\n";
    #endif
        return 0;
    }