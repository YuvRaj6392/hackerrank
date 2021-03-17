#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
ll n,k,u,res=0,min=0;
cin>>n>>k>>u;
ll key[k],usb[u];
for(ll i=0;i<k;i++)
{
	cin>>key[i];
}
for(ll i=0;i<u;i++)
{
	cin>>usb[i];
}
for(ll i=k-1;i>=0;i--)
{
	for(ll j=u-1;j>=0;j--)
	{
			if(key[i]+usb[j]<=n)
	{
			res=key[i]+usb[j];
			if(res>min || min==0)
			{
			min=res;
			}
			
	}
	}
}
if(min>0)
{
	cout<<min;
}
else
{
	cout<<"-1";
}
return 0;
}
