#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
ll n,d=0,a;
cin>>n;
for(ll i=0;i<n;i++)
{
cin>>a;
if(a<38)
{
cout<<a<<endl;
}
else
{
d=a/5;
d=d+1;
if(((d*5)-a)<3)
{
	cout<<d*5<<endl;
}
else
{
	cout<<a<<endl;
}
}
}
return 0;
}
