#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,ar[10000];
double p=0,ne=0,z=0;
cin>>n;
for(int i=0;i<n;i++)
{
	cin>>ar[i];
}
for(int i=0;i<n;i++)
{
	if(ar[i]<0)
	{
		ne++;
	}
	else if(ar[i]>0)
	{
		p++;
	}
	else
	{
		z++;
	}
}
cout<<fixed<<setprecision(6)<<p/n<<endl;
cout<<fixed<<setprecision(6)<<ne/n<<endl;
cout<<fixed<<setprecision(6)<<z/n<<endl;
return 0;
}