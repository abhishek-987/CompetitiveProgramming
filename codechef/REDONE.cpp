#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int j,t,m=1000000007;
	long long int b[1000001];
	b[1]=1;
	for(j=2;j<1000001;j++)
	    b[j]=(b[j-1]*j+b[j-1]+j)%m;
	cin>>t;
	while(t--)
	{
	    int a;
	    cin>>a;
	    cout<<b[a]<<endl;
	}
	return 0;
}