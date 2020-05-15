#include <bits/stdc++.h>
#define fi first
#define se second
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
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vi a(n+1);
		set<pair<int,int>>s;
		s.insert(mp(-n,1));
		
		for1(i,n){
			//if(f==n+1) break;
			auto f = *s.begin();
			int l = f.se, r = f.se-f.fi-1;
			s.erase(s.begin());
			//cout<<l<<" "<<r<<endl;
			
			int cen = (l+r)/2;
			a[cen] = i;
			//cout<<cen<<" "<<i<<endl;
			
			int len = r-l+1;
			
			if((len)%2 == 0) {
				
				s.insert(mp(-1*(len/2),cen+1));
				s.insert(mp(-1*(len/2-1),l));
				
			
			}else {
				
				s.insert(mp(-1*len/2,l));
				s.insert(mp(-1*len/2,cen+1));
				
				
				
			}
			
			
			
		}
		for1(i,n) cout<<a[i]<<" ";
		cout<<endl;
	}


    return 0;
}
