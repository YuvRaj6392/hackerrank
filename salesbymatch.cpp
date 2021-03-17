#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
ll n,c=0,d=0;
cin>>n;
ll ar[n];
set<int>s;
set<int>::iterator itr;
for(ll i=0;i<n;i++)
{
cin>>ar[i];
s.insert(ar[i]);
}
for(itr=s.begin();itr!=s.end();itr++)
{
	c=0;
	for(ll j=0;j<n;j++)
	{
		if(*itr==ar[j])
		{
			c++;
		}
	}
	if(c>=2)
	{
		d=d+c/2;
	}
}
cout<<d;
return 0;
}