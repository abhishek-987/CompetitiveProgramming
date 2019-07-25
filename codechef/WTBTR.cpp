#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int i,n;
        cin>>n;
        long long int x[n],y[n],v[n],h[n],l[n-1],m[n-1];
        for(i=0;i<n;i++)
        {  
            cin>>x[i]>>y[i];
            v[i]=y[i]-x[i];
            h[i]=-y[i]-x[i];
        }
        sort(v,v+n);
        sort(h,h+n);
        for(i=1;i<n;i++)
        {
            l[i-1]=abs(v[i]-v[i-1]);
            m[i-1]=abs(h[i]-h[i-1]);
        }
        long long int *lmin,*mmin,ans; 
        lmin=std::min_element(l,l+n-1);
        mmin=std::min_element(m,m+n-1);
        if(*lmin<*mmin)
            ans=*lmin;
        else
            ans=*mmin; 
        long double ansf;
        ansf=1.0*ans/2;
        cout<<fixed;
        cout<<ansf<<endl;
    }
    return 0;
}