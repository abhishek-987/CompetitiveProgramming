    #include <bits/stdc++.h>
    using namespace std;
    #define ll int
    int dp[101][101],arr[101][101];
    ll n,m;
    ll go(ll r, ll c)
    {
        if(r<0||c<0||r>=n||c>=m)
            return 0;
        if(dp[r][c])
            return dp[r][c];
        ll ans=0;
        ans=max(go(r+1,c-1),go(r+1,c+1));
        ans=max(go(r+1,c),ans);
        ans+=arr[r][c];
        dp[r][c]=ans;
        return ans;
     
    }
     
    int main(){
     
        ll t; cin>>t;
        while(t--){
            cin>>n>>m;
            ll max1=0;
            for(ll i=0;i<n;i++) for(ll j=0;j<m;j++) dp[i][j]=0;
            for(ll i=0;i<n;i++) for(ll j=0;j<m;j++) cin>>arr[i][j];
            for(ll i=0;i<m;i++)
                max1=max(max1,go(0,i));
            cout<<max1<<endl;
        }
        return 0;
    } 