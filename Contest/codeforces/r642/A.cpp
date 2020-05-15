#include <bits/stdc++.h>
#define fi first
#define se second
#define eb emplace_back
#define um unordered_map
#define all(x) (x).begin(),(x).end()
#define forn(i, n) for(int i = 0; i < int(n); ++i)
#define for1(i, n) for(int i = 1; i <= int(n); ++i)
#define forb(i, n) for (int i = (int)(n) - 1; i >= 0; --i)
#define forf(i, a, b) for (int i = (int)(a); i <= (int)(b); ++i)
using namespace std;
typedef long double ld; typedef long long ll;
typedef vector<int> vi; typedef vector<pair<int, int>> vpi; typedef vector<vi> vvi;
typedef vector<ll> vll; typedef vector<pair<ll, ll>> vpll; typedef vector<vll> vvll;
const ll MOD = 1e9+7, INF = 1e18;
/********************************************************************************/


 
int32_t main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    cout.precision(10); cout << fixed;
 
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        if(n==1) cout<<"0"<<endl;
        else if(n==2) cout<<m<<endl;
        else cout<<m*2<<endl;
    }
 
 
    return 0;
}