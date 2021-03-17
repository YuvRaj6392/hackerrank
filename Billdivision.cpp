#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
ll n,sum=0,charged,index;
cin>>n>>index;
ll ar[n];
for(ll i=0;i<n;i++)
{
	cin>>ar[i];
  sum=sum+ar[i];
}
sum=sum-ar[index];
sum=sum/2;
cin>>charged;
if(charged==sum)
{
cout<<"Bon Appetit";
}
else
{
cout<<charged-sum;
}
return 0;
}