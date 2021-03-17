#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
	ll ar[26],max=0,c=0,a=0;
	string str;
	for(ll i=0;i<26;i++)
	{
		cin>>ar[i];
	}
	cin>>str;
	ll len=str.length();
	for(ll i=0;i<len;i++)
	{
		a=str[i]-97;
		c=ar[a];
		if(c>max or max==0)
		{
			max=c;
		}
	}
cout<<max*len;	
return 0;
}
