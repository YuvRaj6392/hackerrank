#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
void sort(ll ar[],ll n)
{
	ll temp,min=0;
	for(ll i=0;i<n-1;i++)
	{
		min=i;
		for(ll j=i+1;j<n;j++)
		{
			if(ar[j]<ar[min])
			{
				min=j;
				temp=ar[i];
				ar[i]=ar[min];
				ar[min]=temp;
			}
		}
	}
}
int main()
{
	ll n,c=1,res=0;
	cin>>n;
	ll ar[n];
	for(ll i=0;i<n;i++)
	{
		cin>>ar[i];
	}
sort(ar,n);
	ll sub=ar[0];
	for(ll i=1;i<n;i++)
	{
		if(sub==ar[i] || sub+1==ar[i])
		{
			c++;
		}
		else
		{
			if(c>res)
			{
				res=c;
			}
			c=1;
sub=ar[i];
		}
	}
if(c>res)
{
	res=c;
}
cout<<res;
return 0;
}