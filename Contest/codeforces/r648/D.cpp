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

int n,m,g,b,f,p1,r1;
char a[52][52];
int vis[52][52];
vpi v;
int x1;
vi v1;

void go(int p ,int r) {

    if(f) return;

    if(a[p][r] == 'G' && (p < p1 || (p1 == p && r < r1)) ) {
        vis[p][r] = 1;
        f++;
        return;
    } 

    if(vis[p][r] == 1) return;

    if(a[p][r] == '#') {
        vis[p][r] = 1;
        return; 
    }

    if((p < n && a[p+1][r] == 'B') || (r < m && a[p][r+1] == 'B')||(r>1&&a[p][r-1]=='B')||(p>1&&a[p-1][r]=='B'))
    {
        vis[p][r] = 1;
        return;
    }

    if(p == n && r == m){
        f++;
        vis[n][m] = 1;
        return;
    }

    vis[p][r] = 1;

    if(p > 1) go(p-1,r);

    if(r > 1) go(p,r-1);

    if(p < n) go(p+1,r);

    if(r < m) go(p,r+1);

}


int32_t main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    cout.precision(4); cout << fixed;
#ifdef LOCAL_JUDGE
    freopen("input.txt", "rt", stdin);
#endif

    int t;
    cin >> t;
    while(t--) {
        cin >> n >> m;
        //f=0;
        v.clear();
        v1.clear();
        for1(i,n) {
            for1(j,m) {
                cin >> a[i][j];
            }
        }
        g = 0, b = 0;
        for1(i,n) {
            for1(j,m) {
                if(a[i][j] == 'G'){
                    g++;
                    v.eb(i,j);
                }
                else if(a[i][j] == 'B') b++;
            }
        }
        if(g==0){
            cout << "Yes" << endl;
            continue;
        }

        if((n > 1 && a[n-1][m] == 'B') || (m > 1 && a[n][m-1] == 'B')) {
            cout << "No" << endl;
            continue;
        }
        int f1=0;
        forn(i,v.size()) {
            memset(vis,0,sizeof(vis));
            f = 0;
            p1 = v[i].fi, r1 = v[i].se;
            go(v[i].fi, v[i].se);
            if(f==0){
                f1++;
                break;
            }
        }
        if(f1==0) {
            cout << "Yes" << endl;
        }
        else cout << "No" << endl;

    }
    
#ifdef LOCAL_JUDGE
    cerr << "Time:" << 1.0 * clock()/CLOCKS_PER_SEC << "s.\n";
#endif
    return 0;
}