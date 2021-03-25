#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
set<ll>s;
set<ll>::iterator itr;
ll n,na,m,ma;
cin>>n;
for(ll i=0;i<n;i++)
{
	cin>>na;
	s.insert(na);
}
cin>>m;
ll ar[m];
for(ll i=0;i<m;i++)
{
	cin>>ar[i];
	s.insert(ar[i]);
	ll t=s.size();
for(itr=s.begin();itr!=s.end();itr++)
{
	if(*itr==ar[i])
	{
		cout<<t<<endl;
		s.erase(ar[i]);
		break;
	}
	else
	{
		t--;
	}
}
}
return 0;
}
