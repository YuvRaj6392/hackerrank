#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
ll n,k,t=-1,e=100;
cin>>n>>k;
ll c[n];
for(ll i=0;i<n;i++)
{
cin>>c[i];
}
ll i=0;
while(t!=0)
{
t=(i+k)%n;
if(c[t]==1)
{
e=e-1-2;
}
else
{
e=e-1;
}
i+=k;
}
cout<<e;
return 0;
}