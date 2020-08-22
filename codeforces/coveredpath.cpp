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
  ll v1,v2;
  cin >> v1 >> v2;
  ll t, d;
  cin >> t >> d;
  if(v1 > v2) {
		ll r = v1;
		v1 = v2;
		v2 = r;
	}
	ll a[t],f,ans = 0;
	a[t-1] = v2;
	for(int i = t-2; i >= 1 ; i--) {
		a[i] = a[i+1] + d;
	}
	a[0] = v1;
	f = v1;
	forn(i,t) {
		if(f <= a[i]) ans += f, f+=d;
		else ans += a[i], f = a[i] , f-=d;
	}
	cout << ans << endl;

  
#ifdef LOCAL_JUDGE
  cerr << "Time:" << 1.0 * clock()/CLOCKS_PER_SEC << "s.\n";
#endif
  return 0;
}
