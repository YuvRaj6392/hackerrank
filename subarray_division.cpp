#include<bits/stdc++.h>
typedef long ll;
using namespace std;
int main()
{
ll n,ar[10000],d,m,sum=0,c=0,t,j;
cin>>n;
for(ll i=0;i<n;i++)
{
cin>>ar[i];
}
cin>>d>>m;
t=m;
for(ll i=0;i<=n-t;i++)
{
	sum=0;
	m=t;
	j=i;
	while(m--)
	{
		sum=sum+ar[j];
		j++;
	}
	if(sum==d)
	{
		c++;
	}
}
cout<<c;
return 0;
}