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
  cout.precision(10); cout << fixed;
#ifdef LOCAL_JUDGE
  freopen("input.txt", "rt", stdin);
#endif

  int t;
  cin >> t;
  while(t--) {
    int n,k;
    cin >> n >> k;
    string s;
    cin >> s;
    vector<char> v(k);
    forn(i,k) v[i] = '?';
    int ans = 0;
    forn(i,k) {
      int f = 0, g = i;
      while(g < n) {
        if(f == 0 && s[g] != '?') {
          f++;
          v[i] = s[g];
          g+=k;
          continue;
        }
        if(f > 0 && s[g] != '?' && s[g] != v[i]){
          ans = -1;
          break;
        }
        g+=k;
      }
      if(ans == -1) break;
    }
    if(ans == -1) cout << "NO" << endl;
    else {

        int o = 0,z = 0,qu = 0;
      forn(i,k) {
        if(v[i] == '1') o++;
        else if(v[i] == '0') z++;
        else if(v[i] == '?') qu++;
      }
      k = k/2;
      if(o > k || z > k) cout << "NO" << endl;
      else{
        if(o < k) qu-=(k-o), o = k;
        if(qu < 0) cout << "NO" << endl;
        else {
          if(z < k) qu-=(k-z), z = k;
          if(qu < 0) cout << "NO" << endl;
          else cout << "YES" << endl;
        }
      }
      //if(max(o,z) - min(o,z) == qu) cout << "YES" << endl;
      //else cout << "NO" << endl;

  
    }
 }

    
  
#ifdef LOCAL_JUDGE
  cerr << "Time:" << 1.0 * clock()/CLOCKS_PER_SEC << "s.\n";
#endif
  return 0;
}

