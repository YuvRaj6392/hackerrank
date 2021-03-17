#include<bits/stdc++.h>
typedef long ll;
using namespace std;
int main()
{
ll s,t,a,b,m,n,ap,ora,app=0,orr=0;
cin>>s>>t;
cin>>a>>b;
cin>>m>>n;
for(int i=0;i<m;i++)
{
cin>>ap;
ap=ap+a;
if(ap>=s && ap<=t)
{
	app++;
}
}
for(int i=0;i<n;i++)
{
cin>>ora;
ora=ora+b;
if(ora>=s && ora<=t)
{
orr++;
}
}
cout<<app<<endl<<orr;
return 0;
}