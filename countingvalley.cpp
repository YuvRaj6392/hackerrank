#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
ll n,sea=0,valley=0;
cin>>n;
string str;
cin>>str;
for(ll i=0;i<n;i++)
{
	if(str[i]=='U')
	{
		sea++;
	}
	else
	{
		sea--;		
	}
	if(sea==0 and str[i]=='U')
	{
		valley++;
	}
}
cout<<valley;
return 0;
}