#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
ll a,b,c=0,d=0;
cin>>a>>b;
c=b/2;
d=(a-b)/2;
if(c<d)
{
cout<<c;
}
else if(d<c)
{
cout<<d;
}
else
{
cout<<c;
}
return 0;
}