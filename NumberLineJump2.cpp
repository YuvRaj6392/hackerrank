#include<bits/stdc++.h>
typedef long ll;
using namespace std;
int jump(ll x1,ll v1,ll x2,ll v2)
{
	for(ll i=0;i<10000;i++)
{
	x1=x1+v1;
	x2=x2+v2;
	if(x1==x2)
	{
		return 1;
	}
}
return -1;
}
int main()
{
ll x1,v1,x2,v2;
cin>>x1>>v1>>x2>>v2;
if(jump(x1,v1,x2,v2)!=-1)
{
	cout<<"YES";
}
else
{
cout<<"NO";
}
return 0;
}	
