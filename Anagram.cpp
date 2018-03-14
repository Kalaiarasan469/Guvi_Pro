#include <iostream>
using namespace std;
class Anagram
{
string s;
int n1;
bool ch=false,d=false,h=false,o=false,n=false,i=false;
void get()
{
cout<<"INPUT"<<endl;
cin>>s;
}
void chck()
{
n1=s.length();
if(n1!=5)
{ch=false;}
for(i=0;i<n1;i++)
{
switch(s[i])
{
case 'd':if(d){ch=false;}
        else{d=true;}
        break;
case 'h':if(h){ch=false;}
        else{d=true;}
        break;
case 'o':if(o){ch=false;}
        else{d=true;}
        break;
case 'n':if(n){ch=false;}
        else{d=true;}
        break;
case 'i':if(i){ch=false;}
        else{d=true;}
        break;
}
}
}
void display()
{
cout<<"OUTPUT"<<endl;
cout<<"ch="<<ch;
if(ch)
{cout<<"yes";}
else
{cout<<"no";}
}
public:
Anagram()
{
    get();
    display();
    chck();
}
};
int main() {
 Anagram a;
	return 0;
}
