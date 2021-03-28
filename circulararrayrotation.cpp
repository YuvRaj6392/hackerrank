#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
ll n,k,q,b;
cin>>n>>k>>q;
ll ar[n];
for(ll i=0;i<n;i++)
{
cin>>ar[i];
}
k=k%n;
for(ll i=0;i<q;i++)
{
	cin>>b;
	cout<<ar[(n-k+b)%n]<<endl;
}
return 0;
}