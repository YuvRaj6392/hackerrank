#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,ar[100][100],sum1=0,sum2=0,t;
cin>>n;
for(int i=0;i<n;i++)
{
	for(int j=0;j<n;j++)
	{
		cin>>ar[i][j];
	}
}
for(int i=0;i<n;i++)
{
	sum1=sum1+ar[i][i];
	sum2=sum2+ar[i][n-1-i];
}
cout<<abs(sum1-sum2);
return 0;
}