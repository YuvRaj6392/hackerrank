#include<bits/stdc++.h>
using namespace std;
int main()
{
string s;
cin>>s;
int hr;
hr=((s[0]-'0')*10)+(s[1]-'0');
if(s[8]=='P' && hr==12)
{
	cout<<to_string(hr);
}
else if(s[8]=='P')
{
	hr=hr+12;
	cout<<to_string(hr);
}
else if(s[8]=='A' && hr==12)
{
	cout<<"00";
}
else
{
	cout<<s[0]<<s[1];
}
int l=s.length();
l=l-2;
for(int i=2;i<l;i++)
{
	cout<<s[i];
}
return 0;
}