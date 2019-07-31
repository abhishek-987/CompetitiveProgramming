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
     
        string a,b;
        cin>>a>>b;
        int f=0, ato=0, arr=0, a1[27]={}, b1[27]={};
        forn(i,a.length()) a1[a[i]-96]++;
        forn(i,b.length()) b1[b[i]-96]++;
        for1(i,26){
            if(a1[i]<b1[i]){
                f++;
                break;
            }else if(a1[i]>b1[i]){
                ato++;
            }
        }
        if(f!=0)
            cout<<"need tree"<<endl;
        else{
            int j=0;
            forn(i,a.length()){
                if(a[i]==b[j]){
                    j++;
                    if(j==b.length())
                        break;
                }
            }
            if(j==b.length()&&ato)
                cout<<"automaton"<<endl;
            else if(j!=b.length()&&ato)
                cout<<"both"<<endl;
            else if(j!=b.length()&&ato==0)
                cout<<"array"<<endl;
        }
     
    #ifndef ONLINE_JUDGE
        cerr<<"Time:"<<1.0*clock()/CLOCKS_PER_SEC<<"s.\n";
    #endif
        return 0;
    }