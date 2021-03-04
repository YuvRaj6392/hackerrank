#include<bits/stdc++.h>
using namespace std;
int main()
{
int b=0,a=0,ar1[3],ar2[3];
for(int i=0;i<3;i++)
{
cin>>ar1[i];
}
for(int i=0;i<3;i++)
{
cin>>ar2[i];
}
for(int i=0;i<3;i++)
{
if(ar2[i]>ar1[i])
{
b++;
}
else if(ar1[i]>ar2[i])
{
a++;
}
else
{
continue;
}
}
cout<<a<<" "<<b;
return 0;
}