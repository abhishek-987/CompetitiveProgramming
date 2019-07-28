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
     
        while(1){
            string s; cin>>s;
            if(s=="0")
                break;
            int dp[5001];
            memset(dp,0,sizeof(dp));
            dp[0]=1;
            forn(i,s.length()){
                if(i==0)
                    dp[i+1]=1;
                else{
                    if(s[i]=='0')
                        dp[i+1]=dp[i-1];
                    else{
                        dp[i+1]=dp[i];
                        if(s[i-1]!='0'&&((s[i-1]=='2'&&s[i]<='6')||(s[i-1]=='1')))
                            dp[i+1]+=dp[i-1];
                    }
                }
            }
            cout<<dp[s.length()]<<endl;
        }
     
    #ifndef ONLINE_JUDGE
        cerr<<"Time:"<<1.0*clock()/CLOCKS_PER_SEC<<"s.\n";
    #endif
        return 0;
    } 