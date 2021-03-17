#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
ll n,k,a,dose=0,max=0;
cin>>n>>k;
for(ll i=0;i<n;i++)
{
cin>>a;
if(a>k)
{
dose=a-k;
if(dose>max || max==0)
{
	max=dose;
}
}
}
cout<<max;
return 0;
}
