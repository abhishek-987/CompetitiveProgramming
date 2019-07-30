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
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;
typedef pair<ll, ll> pll;
typedef vector<pll> vpll;
typedef long double ld;
 
vll v1,v2;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.precision(10);
    cout << fixed;
#ifndef ONLINE_JUDGE
    freopen("input.txt", "rt", stdin);
#endif
 
    ll m,s;
    cin>>m>>s;
    v1.resize(m,0);
    v1[0]=1;
    v2.resize(m,9);
    ll sum1=1;
    ll sum2=m*9;
    ll g=m-1,f=0;
    if(s==0&&m==1){
        cout<<"0 0";
    }
    else{
        while(sum1!=s){
            if(g==-1)
                break;
            v1[g]++;
            sum1++;
            if(v1[g]==9){
                g--;
            }
        }
        g=m-1;
        while(sum2!=s){
            if(g==-1)
                break;
            v2[g]--;
            sum2--;
            if(v2[g]==0){
                g--;
            }
        }
        if(sum1!=s||sum2!=s)
            cout<<"-1 -1"<<endl;
        else
        {
            forn(i,m){
                cout<<v1[i];
            }
            cout<<" ";
            forn(i,m)
                cout<<v2[i];
        }
        
    }
    cout<<endl;
#ifndef ONLINE_JUDGE
    cerr << "Time: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
#endif
 
    return 0;
}