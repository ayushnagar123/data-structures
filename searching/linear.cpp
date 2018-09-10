#include<iostream>
#include<array>
#include<tuple>
#include<iterator>
#include<string>
using namespace std;
array<int,100>v;
array<double,100>v1;
array<char,100>v2;
array<string,100>v3;
class sorting
{
    public:

        int i,j=0,j1=0,j2=0,j3=0;
        void input(int n)
        {
            v[j]=n;j++;
        }
        void input(double n)
        {
            v1[j1]=n;j1++;
        }
        void input(char n)
        {
            v2[j2]=n;j2++;
        }
        void input(string n)
        {
            v3[j3]=n;j3++;
            cout<<v3.at(0)<<endl;
        }
        int linear_search(int x)
        {
            for(i=0;i<v.size();i++)
            {
            if(v[i]==x)
            {
                    return i;
            }
            }
            return -1;
        }
        int linear_search(double x)
        {
            for(i=0;i<v.size();i++)
            {
            if(v1[i]==x)
            {
                    return i;
            }
            }
            return -1;
        }
        int linear_search(char x)
        {
            for(i=0;i<v.size();i++)
            {
            if(v2[i]==x)
            {
                    return i;
            }
            }
            return -1;
        }
        int linear_search(string x)
        {
            for(i=0;i<v.size();i++)
            {
            if(v3[i]==x)
            {
                    return i;
            }
            }
            return -1;
        }
};
int main()
{
    int ch;
    sorting s1;
    cout<<"what is the datatype of input:-\n1. int\n2. double\n3. char\n4. string"<<endl;
    cin>>ch;
    switch(ch)
    {
        case 1:
            {
                int n,m;
                do
                {
                    cout<<"enter the value to be inserted in array:-";
                    cin>>n;
                    s1.input(n);
                    cout<<"do you want to add more elements? 1. yes 2. no\n";
                    cin>>m;
                }while(m!=0);
                int x;
                cout<<"enter the value to be searched in array:-";
                cin>>x;
                int k=s1.linear_search(x);
                if(k==-1)
                {
                    cout<<x<<" is not found"<<endl;
                }
                else
                {
                    cout<<x<<" is found at "<<k<<"th location"<<endl;
                }
                break;
            }
        case 2:
            {
                double n;int m;
                do
                {
                    cout<<"enter the value to be inserted in array:-";
                    cin>>n;
                    s1.input(n);
                    cout<<"do you want to add more elements? 1. yes 2. no\n";
                    cin>>m;
                }while(m!=0);
                double x;
                cout<<"enter the value to be searched in array:-";
                cin>>x;
                int k=s1.linear_search(x);
                if(k==-1)
                {
                    cout<<x<<" is not found"<<endl;
                }
                else
                {
                    cout<<x<<" is found at "<<k<<"th location"<<endl;
                }
                break;
            }
            case 3:
            {
                char n;int m;
                do
                {
                    cout<<"enter the value to be inserted in array:-";
                    cin>>n;
                    s1.input(n);
                    cout<<"do you want to add more elements? 1. yes 2. no\n";
                    cin>>m;
                }while(m!=0);
                char x;
                cout<<"enter the value to be searched in array:-";
                cin>>x;
                int k=s1.linear_search(x);
                if(k==-1)
                {
                    cout<<x<<" is not found"<<endl;
                }
                else
                {
                    cout<<x<<" is found at "<<k<<"th location"<<endl;
                }
                break;
            }
            case 4:
            {
                string n;int m;
                do
                {
                    cout<<"enter the value to be inserted in array:-";
                    cin>>n;
                    s1.input(n);
                    cout<<"do you want to add more elements? 1. yes 2. no\n";
                    cin>>m;
                }while(m!=0);
                string x;
                cout<<"enter the value to be searched in array:-";
                cin>>x;
                int k=s1.linear_search(x);
                if(k==-1)
                {
                    cout<<x<<"is not found"<<endl;
                }
                else
                {
                    cout<<x<<" is found at "<<k<<"th location"<<endl;
                }
                break;
            }
    }
}
