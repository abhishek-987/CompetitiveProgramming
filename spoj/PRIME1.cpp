    #include <bits/stdc++.h>
     
    #define mp make_pair
    #define mt make_tuple
    #define fi first
    #define se second
    #define pb push_back
    #define eb emplace_back
    #define pob pop_back
    #define um unordered_map
    #define all(x) (x).begin(), (x).end()
    #define rall(x) (x).rbegin(), (x).rend()
    #define forn(i, n) for (int i = 0; i < (int)(n); ++i)
    #define for1(i, n) for (int i = 1; i <= (int)(n); ++i)
    #define ford(i, n) for (int i = (int)(n) - 1; i >= 0; --i)
    #define fore(i, a, b) for (int i = (int)(a); i <= (int)(b); ++i)
     
    using namespace std;
     
    typedef pair<int, int> pii;
    typedef vector<int> vi;
    typedef vector<pii> vpi;
    typedef vector<vi> vvi;
    typedef long long i64;
    typedef vector<i64> vi64;
    typedef vector<vi64> vvi64;
    typedef pair<i64, i64> pi64;
    typedef vector<pi64> vpi64;
    typedef double ld;
     
    i64 isPrime(i64 n) 
    { 
        // Corner cases 
        if (n <= 1)  return 0; 
        if (n <= 3)  return 1; 
      
        // This is checked so that we can skip  
        // middle five numbers in below loop 
        if (n%2 == 0 || n%3 == 0) return 0; 
      
        for (i64 i=5; i*i<=n; i=i+6) 
            if (n%i == 0 || n%(i+2) == 0) 
               return 0; 
      
        return 1; 
    } 
     
     
    int main() {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.precision(10);
        cout << fixed;
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "rt", stdin);
    #endif
     
        i64 t;
        cin>>t;
        while(t--){
            i64 m,n;
            cin>>m>>n;
            for(i64 i=m;i<=n;i++){
                if(isPrime(i))
                    cout<<i<<endl;
            }
            cout<<endl;
        }
     
     
     
     
    #ifndef ONLINE_JUDGE
        cerr << "Time: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    #endif
     
        return 0;
    } 