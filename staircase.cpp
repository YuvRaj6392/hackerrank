#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
for(int i=1;i<n;i++)
{
for(int j=i;j<n;j++)
{
cout<<" ";
}
for(int l=1;l<=i;l++)
{
	cout<<"#";
}
cout<<endl;
}
for(int i=0;i<n;i++)
{
	cout<<"#";
}
return 0;
}
