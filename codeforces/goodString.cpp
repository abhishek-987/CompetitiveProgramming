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

  int t;
  cin >> t;
  while(t--) {
 	  string s;
    cin >> s;
   	int mi = INT_MAX;
    forn(i,10) {
			int g1 = 0;
    	for(int j = i+1; j <= 9; j++) {
    		int g = 0, f = 0;
    		forn(k,s.length()) {
    			if(s[k] - 48 == i && f == 0) {
    				f = 1;
    			}else if(s[k] - 48 == j && f == 0) {
    				f = 2;
					}else if(f == 1 && s[k] - 48 == j) f = 2;
    			else if(f == 2 && s[k] - 48 == i) f = 1;
    			else if((s[k]-48 != i && s[k] - 48 != j) || (f == 2 && s[k]-48 == j) || (s[k]-48 == i && f == 1)) {
    					g++;
    			}
    		}
    		//if(g == 4) cout << i << " " << j << endl; 
    		if((s.length() - g) % 2 != 0) g++;
    		mi = min(g,mi);
    	}
			forn(k,s.length()) {
				if(s[k]-48 != i) {
					g1++;
				}
			}
			mi = min(g1, mi);
    }

    cout << mi << endl;
   }
  
    return 0;
}

