#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int a,b,i=0,min,max;
        cin>>a>>b;
        while(++i)
        {
        	if(a<=b)
        	{
        		max=b;
        		min=a;
        	}else
        	{
        		min=b;
        		max=a;
        	}
        	a=max%min;
        	b=min;
        	if(min!=0&&(max/min)>1)
        	{
        	    break;
        	}
        	if(a==0)
        		break;
        }
       	if(i%2==0)
       		cout<<"Rich"<<endl;
       	else
       		cout<<"Ari"<<endl;
    }
    return 0;
}