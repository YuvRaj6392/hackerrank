#include<bits/stdc++.h>
using namespace std;
int main()
{
long ar[100],min=10000000000,max=-1,sum=0;
for(int i=0;i<5;i++)
{
cin>>ar[i];
sum=sum+ar[i];
if(ar[i]<min)
{
	min=ar[i];
}
if(ar[i]>max)
{
	max=ar[i];
}
}
cout<<sum-max<<" "<<sum-min;
return 0;
}

