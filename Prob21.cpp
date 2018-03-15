include <iostream>
using namespace std;
class Prob21
{
int n,j,ar[100000],s1,s2;
void get()
{
cout<<"INPUT"<<endl;
cin>>n;
for(i=0;i<n;i++)
{
cin>>ar[i];
}
}
void chck()
{
for(i=0;i<n;i++)
{
for(j=i;j<n;j++)
{
if(ar[i]<ar[j])
{
int t=ar[i];
ar[i]=ar[j];
ar[j]=t;
}
}
}
for(i=0;i<=n/2;i++)
{
s1=s1+ar[i];
if(c==0)
{
s2=s2+ar[n-1-i];
}
else
{
if(i!=n/2)
{
s2=s2+ar[n-i-1];
}
}
void display()
{
cout<<"OUTPUT"<<endl<<s1<<" "<<s2;
}
};
public:
Prob21()
{
    get();
    chck();
    display();
};
int main()
{
 Prob21 a;
return 0;
}
