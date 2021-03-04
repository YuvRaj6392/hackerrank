#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
ll n,ar[1000000],min=0,max=0,mi=0,ma=0;
cin>>n;
for(ll i=0;i<n;i++)
{
cin>>ar[i];
}
min=ar[0];
max=ar[0];
for(ll i=1;i<n;i++)
{
	if(ar[i]<min)
	{
		min=ar[i];
		mi++;
	}
	else if(ar[i]>max)
	{
		max=ar[i];
		ma++;
	}	
}
cout<<ma<<" "<<mi;
return 0;
}
