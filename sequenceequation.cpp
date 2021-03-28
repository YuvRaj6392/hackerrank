#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
ll n;
cin>>n;
ll p[n+1];
for(ll i=1;i<=n;i++)
{
ll k;
cin>>k;
p[k]=i;
}
for(ll i=1;i<=n;i++)
{
cout<<p[p[i]]<<endl;
}
return 0;
}