#include <iostream>
using namespace std;
class Anagram
{
string s;
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
for(i=0;i<n/2;i++)
{
s1=s1+ar[i];
}
}
void display()
{
cout<<"OUTPUT"<<endl;
if(ch)
{cout<<"yes"<<endl;}
else
{cout<<"no"<<endl;}
}
};
public:
Anagram()
{
    get();
    chck();
    display();
}
};
int main() {
 Anagram a;
	return 0;
}
