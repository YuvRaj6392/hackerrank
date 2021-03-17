#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
ll ar[3][3],sum1=0,sum2=0,c=0;
set<int>s;
set<int>::iterator itr;
for(ll i=0;i<3;i++)
{
	for(ll j=0;j<3;j++)
	{
		cin>>ar[i][j];
	}
}
for(ll i=0;i<3;i++)
{
	sum1=0;
	sum2=0;
	for(ll j=0;j<3;j++)
	{
		sum1=sum1+ar[i][j];
		sum2=sum2+ar[j][i];
	}
	s.insert(sum1);
	s.insert(sum2);
}
for(itr=s.begin();itr!=s.end();itr++)
{
	c++;
}
cout<<c;
return 0;
}