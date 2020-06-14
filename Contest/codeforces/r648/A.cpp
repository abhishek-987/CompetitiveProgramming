#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
#define eb emplace_back
#define um unordered_map
#define mp make_pair
#define all(x) (x).begin(),(x).end()
#define forn(i, n) for(int i = 0; i < int(n); ++i)
#define for1(i, n) for(int i = 1; i <= int(n); ++i)
#define ford(i, n) for (int i = (int)(n) - 1; i >= 0; --i)
#define fore(i, a, b) for (int i = (int)(a); i <= (int)(b); ++i)
#define che(x) cout << #x << " having " << x << endl 
using namespace std;
typedef long double ld; typedef long long ll;
typedef vector<int> vi; typedef vector<pair<int, int>> vpi; typedef vector<vi> vvi;
typedef vector<ll> vll; typedef vector<pair<ll, ll>> vpll; typedef vector<vll> vvll;
template<class T>bool uin(T &a, T b) {return a > b ? (a = b, true) : false; }
template<class T>bool uax(T &a, T b) {return a < b ? (a = b, true) : false; }
const ll MOD = 1e9+7, INF = 1e18;
/********************************************************************************/


int32_t main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    cout.precision(4); cout << fixed;
#ifdef LOCAL_JUDGE
    freopen("input.txt", "rt", stdin);
#endif

    int t;
    cin >> t;
    while(t--) {
        int n,m;
        cin >> n >> m;
        int a[n][m], x[n], y[m];
        memset(y,0,sizeof(y));
        memset(x,0,sizeof(x));
        forn(i,n) {
            forn(j,m) {
                cin >> a[i][j];
                if(a[i][j] == 1) {
                    x[i]++;
                    y[j]++;
                }
            }
        }
        int r = 0, c = 0;
        forn(i,n) {
            if(x[i] == 0) r++;
        }
        forn(i,m) if(y[i] == 0) c++;
        r = min(r,c);
        if(r%2!=0) cout<<"Ashish" <<endl;
        else cout<<"Vivek"<<endl;

    }
 
#ifdef LOCAL_JUDGE
    cerr << "Time:" << 1.0 * clock()/CLOCKS_PER_SEC << "s.\n";
#endif
    return 0;
}