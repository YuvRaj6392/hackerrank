#include<bits/stdc++.h>
using namespace std;
class hello
{
public:
void sum(int n)
{
int su=0,ar[n];
for(int i=0;i<n;i++)
{
cin>>ar[i];
su=su+ar[i];
}
cout<<su;
}
};
int main()
{
int n;
cin>>n;
hello harry;
harry.sum(n);
return 0;
}