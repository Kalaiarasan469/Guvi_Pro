#include <iostream>
using namespace std;
int main()
{
int i,j,k=0,c,n,l,l1=0;
cin>>n;
string s[n];
for(i=0;i<n;i++)
{cin>>s[i];
l=s[i].length();
if(i==0)
{l1=s[i].length();}
else
{
if(l>l1)
{l=l1;}
else
{l1=l;}
}
}
for(i=0;i<l;i++)
{
c=0;
for(j=0;j<n;j++)
{
if(s[0][i]==s[j][i])
{c++;}
}
if(c==n)
{k++;}
else
{break;}
}
for(i=0;i<k;i++)
{
cout<<s[0][i];
}
return 0;
}
