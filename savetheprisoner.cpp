#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
ll t;
cin>>t;
while(t--)
{
ll n,m,s;
cin>>n>>m>>s;
if((m+s-1)%n==0)
{
	cout<<n<<endl;
}
else
{
cout<<(m+s-1)%n<<endl;
}
}
return 0;
}