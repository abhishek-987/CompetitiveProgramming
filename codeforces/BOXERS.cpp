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
 
um<int,int>m;
 
int32_t main(){
    ios::sync_with_stdio(false);cin.tie(nullptr);
    cout.precision(10);cout<<fixed;
#ifndef ONLINE_JUDGE
    freopen("input.txt","rt",stdin);
#endif
 
    int n,x; cin>>n;
    int a[n]; forn(i,n) cin>>a[i];
    sort(a,a+n);
    forn(i,n){
        x=a[i];
        if(i==0){
            if(a[i]>1) a[i]--;
        }else{
            
            if(a[i]>a[i-1]+1) a[i]--;
            else if(a[i]==a[i-1]+1) a[i]=a[i];
            else a[i]++;
 
        }
        
    }
    int g=0;
    forn(i,n){
        if(m[a[i]]==0&&a[i]!=0){
            m[a[i]]++;
            g++;
        }
    }
    cout<<g<<endl;
 
#ifndef ONLINE_JUDGE
    cerr<<"Time:"<<1.0*clock()/CLOCKS_PER_SEC<<"s.\n";
#endif
    return 0;
}