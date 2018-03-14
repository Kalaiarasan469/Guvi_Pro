#include <iostream>
using namespace std;
class Anagram
{
string s;
int n1,j;
bool ch=true,d=false,h=false,o=false,n=false,i=false;
void get()
{
cout<<"INPUT"<<endl;
getline(cin,s);
}
void chck()
{
n1=s.length();
if(n1!=5)
{ch=false;}
for(j=0;j<n1;j++)
{
switch(s[j])
{
case 'd':if(d){ch=false;}
        else{d=true;}
        break;
case 'h':if(h){ch=false;}
        else{h=true;}
        break;
case 'o':if(o){ch=false;}
        else{o=true;}
        break;
case 'n':if(n){ch=false;}
        else{n=true;}
        break;
case 'i':if(i){ch=false;}
        else{i=true;}
        break;
}
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
