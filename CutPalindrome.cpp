// Example program
#include <iostream>
#include <string>
using namespace std;
class CutPalindrome
{
    int n,i,j,c=0,m=0,k,ar[1000];
    string s;
    public:
    CutPalindrome()
    {
        get();
        remove();
        display();
        }
        void get()
        {
            cout<<"INPUT"<<endl;
        cin>>s;
        }
        void remove()
        {
        n=s.length();
        i=n;
        for(k=0;k<n;k++)
        {
        for(j=k;j<n;j++)
        {
        i--;
        if(s[j]!=s[i])
        {
        c++;
        }
        }
        if(c==0)
        {
            cout<<"Palindrome"<<endl;
            m++;
            ar[m]=k;
            }
        }
        for(i=0;i<m;i++)
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
        }
        void display()
        {
            cout<<"OUTPUT"<<endl<<ar[0];
        }
    };
int main()
{
    CutPalindrome cp;
    return 0;
    }
