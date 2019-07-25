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
     
    um<string,string>mape;
     
    int32_t main(){
        ios::sync_with_stdio(false);cin.tie(nullptr);
        cout.precision(10);cout<<fixed;
    #ifndef ONLINE_JUDGE
        freopen("input.txt","rt",stdin);
    #endif
     
        string n;
        int x;
        cin>>n;
        reverse(n.begin(),n.end());
        int i,ind=-1;
        for(i=n.size()-1;i>0;i--)
            if(n[i]%2==0){
                x=n[i]-n[0];
                if(x<0){
                    ind=i;
                    break;
                }else
                    ind=i;
            }
        if(ind!=-1){
            char s=n[0];
            n[0]=n[ind];
            n[ind]=s;
            for(int i=n.size()-1;i>=0;i--)
                cout<<n[i];
        }else
            cout<<"-1";
        cout<<endl;
    #ifndef ONLINE_JUDGE
        cerr<<"Time:"<<1.0*clock()/CLOCKS_PER_SEC<<"s.\n";
    #endif
        return 0;
    }