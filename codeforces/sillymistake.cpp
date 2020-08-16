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
 
um<ll, ll> m;
 
int32_t main(){
  ios::sync_with_stdio(false); cin.tie(nullptr);
  cout.precision(10); cout << fixed;

	ll n;
	cin >> n;
	ll f = 0,g = 0, h = 0;
	ll a[n];
	forn(i,n) {
		cin >> a[i];
	}
	vi v;
	forn(i,n) {
		m[a[i]]++;
		f += a[i];
		if(m[a[i]] == 2) {
			f = -1;
			break;
		}
		if(a[i] < 0 && m[-a[i]] == 0) {
			f = -1;
			break;
		}
		if(f == 0) {

			v.eb(i-h+1);
			h = i+1;
			m.clear();
		}
	}
	
	if(f!=0) f = -1;

	if(f == -1){
		cout << "-1" << endl;
	}else {
		cout << v.size() << endl;
		forn(i,v.size()) {
			cout << v[i] << " ";
		}
		cout << endl;
	}
  
  return 0;
}

