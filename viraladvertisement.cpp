#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
ll sh=5,li=0,cu=0,n;
cin>>n;
for(ll i=1;i<=n;i++)
{
	li=sh/2;
	cu=cu+li;
	sh=(sh/2)*3;
}
cout<<cu;
return 0;
}