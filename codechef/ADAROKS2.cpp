// 11 13 17 19 23 29 31 37
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,i,x,m,j;
		cin>>n;
		int prime[8]={11,13,17,19,23,29,31,37};
		for(i=0;i<8;i++)
		{
			x=prime[i]*prime[i]+prime[i]+1;
			if(x>=n)
			break;
		}
		int p=prime[i];
		char a[x+1][x+1];
		for(i=1;i<=x;i++)
		{
			for(j=1;j<=x;j++)
				a[i][j]='.';
		}
		a[1][1]='O';
		int k=1,f=0;
		int g=1,l=2;
		for(i=1;i<=p+1;i++)
		{
			for(j=1;j<=p;j++)
			{
				a[g][l]='O';
				a[l][g]='O';
				l++;
			}
			g++;
		}
		f=0;
		g=p+2;l=p+2;
		int uc=2*p+1,h=0;
		int cut;
		for(i=1;i<=p;i++)
		{
			for(j=1;j<=p;j++)
			{
				for(k=1;k<=p;k++)
				{
					while((l+h)>uc)
					{
						l=l-p;	
					}
					a[g][l+h]='O';
					g++;
					l++;
				}
				h=h+f;
				uc=uc+p;
				l=uc-(p-1);
				g=g-p;
			
			}
			uc=2*p+1;
			f++;
			l=p+2;
			g=g+p;
			h=0;
		}
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				cout<<a[i][j];
			}
			cout<<endl;
		}
	}
	return 0;
}