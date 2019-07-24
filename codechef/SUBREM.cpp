#include<bits/stdc++.h>
using namespace std;
long int b[100000];
long int p[100000];
long int level[100000];
int main()
{
	long int t;
	cin>>t;
	while(t--)
	{
		long int n,i,j,N,x,b1,x1=0,z,z1,flag=0;
		cin>>n>>x;
		x=-x;
		vector<long int>c[n];
		for(i=0;i<n;i++)
			cin>>b[i];
		N=n-1;
		while(N--)
		{
			cin>>i>>j;
			i--;
			j--;
			c[i].push_back(j);
			c[j].push_back(i);
		}
		bool marked[n]={false}; 
    	queue<long int>que;  
    	que.push(x1);
    	level[flag++]=x1;
    	marked[x1]=true;
    	while(!que.empty())
    	{ 
        	x1=que.front(); 
		    que.pop();
		    for(i=0;i<c[x1].size();i++)
		    { 
            	b1=c[x1][i];
           	 	if (!marked[b1]) 
           	 	{ 
                	que.push(b1);
                	level[flag++]=b1;
                	p[b1]=x1;
                	marked[b1]=true; 
            	}
        	}
    	}
		for(i=n-1;i>0;i--)
		{
			z=level[i];
			z1=p[z];
			if(b[z]<x)
				b[z]=x;
			b[z1]=b[z1]+b[z];
		}
		z=b[0];
		if(z<x)
			z=x;
		cout<<z<<endl;
	}
	return 0;
}