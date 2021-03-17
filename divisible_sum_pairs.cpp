#include<bits/stdc++.h>
typedef long ll;
using namespace std;
ll divisibleSumPairs(ll ar[],ll n,ll k)
{
	ll sum=0;
	for(ll i=0;i<n-1;i++)
	{
		for(ll j=i+1;j<n;j++)
		{
			if((ar[i]+ar[j])%k==0)
			{
				sum++;
			}
		}
	}
return sum;
}
int main()
{
ll n,k,sum=0;
cin>>n>>k;
ll ar[n];
for(ll i=0;i<n;i++)
{
cin>>ar[i];
}
cout<<divisibleSumPairs(ar,n,k);
return 0;
}