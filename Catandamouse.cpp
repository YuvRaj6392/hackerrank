#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
ll t;
cin>>t;
while(t--)
{
	ll c1,c2,m;
	cin>>c1>>c2>>m;
	if(abs(c1-m)<abs(c2-m))
		{
			cout<<"Cat A"<<endl;
		}
	else if(abs(c2-m)<abs(c1-m))
	{
		cout<<"Cat B"<<endl;
	}
	else
	{
		cout<<"Mouse C"<<endl;
	}
}
return 0;
}