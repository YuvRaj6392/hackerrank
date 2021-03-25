#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
ll s,e,d,n,c=0,r=0,l,f,a;
cin>>s>>e>>f;
for(ll i=s;i<=e;i++)
{
n=i;
r=0;
while(n!=0)
{
d=n%10;
r=r*10+d;
n=n/10;
}
a=abs(r-i);
if(a%f==0)
{
c++;
}
}
cout<<c;
return 0;
}