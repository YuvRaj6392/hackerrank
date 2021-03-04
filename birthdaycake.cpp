#include<bits/stdc++.h>
using namespace std;
int main()
{
long long int height,max=-1,n,c=0;
cin>>n;
for(int i=0;i<n;i++)
{
	cin>>height;
	if(height>max)
	{
		max=height;
		c=1;
	}
	else if(height==max)
	{
		c++;
	}
}
cout<<c;
return 0;
}
	