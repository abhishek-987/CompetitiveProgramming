#include<bits/stdc++.h>
using namespace std;
int p[100000];
unsigned long long int v[100000],m[100000],hcf[100000];
unsigned long long int gcd(unsigned long long int a,unsigned long long int b) 
{ 
    if(a==0) 
        return b; 
    return gcd(b%a,a); 
}
void GetParents(int node,int par,vector<int>tree[])
{       
    for(int i=0;i<tree[node].size();++i)
    {
        if(tree[node][i]!=par)
        {
            p[tree[node][i]]=node;
            hcf[tree[node][i]]=gcd(v[tree[node][i]],hcf[node]);
            GetParents(tree[node][i],node,tree); 
        }
    }
}
int main()
{
	ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		int n,i,j,N;
		cin>>n;
		vector<int>c[n];
		vector<int>leaf;
		N=n-1;
		while(N--)
		{
			cin>>i>>j;
			i--;
			j--;
			c[i].push_back(j);
			c[j].push_back(i);
		}
		for(i=0;i<n;i++)
		{
			cin>>v[i];
			if(c[i].size()==1&&i!=0)
			leaf.push_back(i);
		}
		for(i=0;i<n;i++)
			cin>>m[i];
		p[0]=-1;
		hcf[0]=v[0];
		GetParents(0,-1,c);
		sort(leaf.begin(),leaf.end()); 
    	for(i=0;i<leaf.size();i++)
    	{
    		if(i!=0)
    		cout<<" ";
    		j=leaf[i];
    		cout<<m[j]-gcd(hcf[j],m[j]);
    	}
    	cout<<endl;
    }
    return 0;
}