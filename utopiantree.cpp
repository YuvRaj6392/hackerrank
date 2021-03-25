#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		
	ll n,h=1;
	cin>>n;
	for(ll i=1;i<=n;i++)
	{
		if(i%2!=0)
		{
			h=h*2;
			
		}
		else
		{
			h+=1;
			
		}
	}
	cout<<h<<endl;
	}
return 0;
}