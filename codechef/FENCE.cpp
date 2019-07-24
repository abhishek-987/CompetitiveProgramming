#include<bits/stdc++.h>
using namespace std;
bool sortbysec(const pair<int,int> &a,const pair<int,int> &b) 
{ 
    return (a.second<b.second); 
} 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,i,j,k,f=0,K,p,q;
        vector<pair<int,int>>a;
        cin>>n>>m>>k;
        K=k;
        while(K--)
        {
            cin>>i>>j;
            i--;
            j--;
            a.push_back(make_pair(i,j));
            f=f+4;
        }
       sort(a.begin(),a.end());
       for(i=0;i<k;i++)
       {
       		p=a[i].first;
       		q=a[i].second;
       		j=i+1;
        	while(a[j].first==p&&j<k)
        	{
        		if(a[j].second==q-1)
        		f=f-2;
        		if(a[j].second==q+1)
        		f=f-2;
        		j++;
        	}
       }
        sort(a.begin(),a.end(),sortbysec);
        for(i=0;i<k;i++)
       	{
       		p=a[i].first;
       		q=a[i].second;
       		j=i+1;
        	while(a[j].second==q&&j<k)
        	{
        		if(a[j].first==p-1)
        		f=f-2;
        		if(a[j].first==p+1)
        		f=f-2;
        		j++;
        	}
       	}
        cout<<f<<endl;
    }
    return 0;
}