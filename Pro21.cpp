#include <iostream>
#include<stdio.h>
using namespace std;
class Pro21
{
private:
int i,j,n,k;
double s1,s2,c1,c2,ar[1000],x[1000];
bool fn=false;
public:
void get()
{
cin>>n;
for(i=0;i<n;i++)
{cin>>ar[i];}
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
if(i!=j)
{
if(ar[i]<ar[j])
{
double d=ar[i];
ar[i]=ar[j];
ar[j]=d;
}
}
}
}
}
void chck()
{
for(i=0;i<n;i++)
{
s1=s2=c1=c2=0;
for(j=0;j<n/2;j++)
{
s1+=ar[j];
c1++;
if(i!=n-1||n%2==1)
{
s2+=ar[n-j];
c2++;
}
}
if((s1/c1)==(s2/c2))
{
fn=true;
break;
}
for(k=0;k<n;k++)
{
x[k]=ar[n+k-i-1];
if(k+i-1>n-k)
{x[k]=ar[k-i-1];}
}
for(k=0;k<n;k++)
{ar[k]=x[k];}
}
if(fn)
{cout<<"yes";}
else
{cout<<"no";}
}
Pro21()
{
get();
chck();
}
};
int main()
{
Pro21 h;
return 0;
}
