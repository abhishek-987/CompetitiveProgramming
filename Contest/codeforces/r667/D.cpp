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

    ll t;
    cin >> t;
    while(t--) {
    	ll n, s;
    	cin >> n >> s;
    	vll v;
    	//s++;
    	ll ans = 0;
    	while(n > 0) {
    		v.eb(n%10);
    		ans+=n%10;
    		n = n/10;
    	}
    	if(ans <= s){
    		cout << "0" << endl;
    		continue;
    	}
    	ll f = 0;
    	vll v1;
    	forn(i,v.size()) {
    		if(v[i] == 0 && f == 0){
    			v1.eb(0);
    			continue;
    		}
    		f++;
    		if(f == 1) {
    			v1.eb(10-v[i]);
    			ans-=v[i];
    			ans++;
    			//cout << ans << " " << s << endl;
    			if(ans <= s) {
    				break;
    			}
    			continue;
    		}
    		v1.eb(9-v[i]);
    		ans-=v[i];
    		if(ans <= s) break;
    	}
    	f = 0;
    	for(ll i = v1.size()-1; i>=0 ;i--){
    		if(v1[i] != 0) {
    			f++;
    			cout << v1[i];
    		}
    		if(v1[i] == 0 && f!=0) {
    			cout << v1[i];
    		}
    	}
    	cout << endl;

    }
  
#ifdef LOCAL_JUDGE
  cerr << "Time:" << 1.0 * clock()/CLOCKS_PER_SEC << "s.\n";
#endif
  return 0;
}