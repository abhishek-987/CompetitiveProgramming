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
     
        ll n;
        cin>>n;
        ll a[n],b[n];
        forn(i,n){
            cin>>a[i];
            b[i]=a[i];
        }
        sort(b,b+n);
        ll i,f=0,z=0;
        vi v;
        forn(i,n){
            if(a[i]!=b[i]){
                z++;
                v.eb(i);
            }
        }
        if(z==0)
            cout<<"yes"<<endl<<"1 1"<<endl;
        else if(z%2!=0)
            cout<<"no"<<endl;
        else{
            for(i=0;i<z-1;i++){
                if(v[i+1]-v[i]==2&&f==0)
                    f++;
                else if(v[i+1]-v[i]==2&&f==1){
                    cout<<"no"<<endl;
                    f=-1;
                    break;
                }else if(v[i+1]-v[i]>2){
                    cout<<"no"<<endl;
                    f=-1;
                    break;
                }
            }
            if(f!=-1){
                i=v[0];
                ll j=v[z-1],k;
                reverse(a+i,a+j+1);
                for(k=i;k<=j;k++)
                    if(a[k]!=b[k])
                        break;
     
                if(k==j+1)
                    cout<<"yes"<<endl<<i+1<<" "<<j+1<<endl;
                else
                    cout<<"no"<<endl;
     
            }
        }
     
    #ifndef ONLINE_JUDGE
        cerr<<"Time:"<<1.0*clock()/CLOCKS_PER_SEC<<"s.\n";
    #endif
        return 0;
    }