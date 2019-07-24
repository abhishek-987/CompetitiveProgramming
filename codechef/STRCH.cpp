#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n,i,sum=0,p=-1;
        cin>>n;
        char a[n],c;
        cin>>a>>c;
        for(i=0;i<n;i++)
        if(a[i]==c)
        {
            sum+=(i-p)*(n-i);
            p=i;
        }
        cout<<sum<<endl;
    }
    return 0;
}