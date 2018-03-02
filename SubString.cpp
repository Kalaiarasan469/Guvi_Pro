// Example program
#include <iostream>
#include <string>
using namespace std;
class SubString
{
    string s,s2,s3;
    int n,i,j,k,ch=0,n2;
    public:
    SubString()
    {
        get();
        subStr();
        cout<<"OUTPUT"<<endl<<display();
        }
        void get()
        {cout<<"Input"<<endl;cin>>s;}
        void subStr()
        {
            s3=s;
            n=s.length();
            for(i=0;i<n;i++)
            {
                int m=0,p=0;
                for(j=i+1;j<n;j++)
                {
                m++;
                    if(s[i]!=s[j])
                    {p++;
                    }
                }
                if(m==p)
                {
                s2[ch]=s[i];
                ch++;
                 }
            }
            }
            int display()
            {
                return ch;
                }
    };
int main()
{
    SubString s;
return 0;
}
