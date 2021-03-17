#include<bits/stdc++.h>
typedef long ll;
using namespace std;
int main()
{
ll n,a,ar[6],ap[5];
ar[0]=0;
ar[1]=0;
ar[2]=0;
ar[3]=0;
ar[4]=0;
ar[5]=0;
cin>>n;
ll max=0,j=0,min=0;
for(ll i=0;i<n;i++)
{
	cin>>a;
	ar[a]=ar[a]+1;
	if(ar[a]>max)
	{
		max=ar[a];
	}
}
for(ll i=0;i<6;i++)
{
	if(ar[i]==max)
	{
		ap[j]=i;
		if(ap[j]<min || min==0)
		{
			min=ap[j];
		}
	}
j++;
}
	
cout<<min;
return 0;
}
