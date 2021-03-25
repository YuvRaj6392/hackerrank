#include<bits/stdc++.h>
typedef signed long long int ll;
using namespace std;
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
	ll n,k,a;
 cin>>n>>k;
 ll c=0;
for(ll i=0;i<n;i++)
{
cin>>a;
if(a<=0)
{
c++;
}
}
if(c<k)
{
cout<<"YES"<<endl;
}
else
{
cout<<"NO"<<endl;
}
}
return 0;
}