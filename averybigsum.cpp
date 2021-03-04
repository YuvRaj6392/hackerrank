#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
unsigned long long int in,s=0;
cin>>n;
for(int i=0;i<n;i++)
{
cin>>in;
s=s+in;
}
cout<<s;
return 0;
}