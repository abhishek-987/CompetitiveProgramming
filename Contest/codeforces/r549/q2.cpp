#include <bits/stdc++.h> 
using namespace std; 
#define ll long long
  
// Returns the product of digits of number x 
ll product(ll x) 
{ 
    ll prod = 1; 
    while (x) { 
        prod *= (x % 10); 
        x /= 10; 
    } 
    return prod; 
} 
  
// This function returns the number having 
// maximum product of the digits 
ll findNumber(ll l, ll r) 
{ 
    // Converting both llegers to strings 
    string a = to_string(l); 
    string b = to_string(r); 
  
    // Let the current answer be r 
    ll ans = r; 
    for (ll i = 0; i < b.size(); i++) { 
        if (b[i] == '0') 
            continue; 
  
        // Stores the current number having 
        // current digit one less than current 
        // digit in b 
        string curr = b; 
        curr[i] = ((curr[i] - '0') - 1) + '0'; 
  
        // Replace all following digits with 9 
        // to maximise the product 
        for (ll j = i + 1; j < curr.size(); j++) 
            curr[j] = '9'; 
  
        // Convert string to number 
        ll num = 0; 
        for (auto c : curr) 
            num = num * 10 + (c - '0'); 
  
        // Check if it lies in range and its product 
        // is greater than max product 
        if (num >= l && product(ans) < product(num)) 
            ans = num; 
    } 
  
    return ans; 
} 
  
// Driver Code 
int main() 
{ 
    ll l = 1, r;
    cin>>r; 
    ll n = findNumber(l, r);
    ll f=1,x;
    while(n>0){
        x=n%10;
        f=f*x;
        n=n/10;
    }
    //cout << findNumber(l, r) << endl; 
    cout<<f<<endl;
    return 0; 
} 