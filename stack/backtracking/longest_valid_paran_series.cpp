#include<iostream>
#include<stdlib.h>
#include<string>
#include<stack>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int i,l,r;
        stack <char> s;
        string str;
        cin>>str;
        cin>>l>>r;
        for(i=r;i>=l;i--)
        {
            s.push(str[i]);
        }
        int c=0,ctr=0;
        while(!s.empty())
        {
            if(s.top()==')')
            {
                ctr--;
                s.pop();
            }
            else if(s.top()=='(')
            {
                ctr++;
                s.pop();
            }
            if(ctr==0)
            {
                c=c+2;
            }
        }
        cout<<c<<endl;
    }
}
