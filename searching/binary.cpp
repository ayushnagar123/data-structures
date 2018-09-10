#include<iostream>
#include<vector>
#include<iterator>
#include<algorithm>
using namespace std;
class bin
{
	public:
		int i,j=0,j1=0,j2=0,j3=0;
		vector<int>a;
		vector<double>a1;
		vector<char>a2;
		vector<string>a3;
		void input(int n)
		{
			a[j]=n;j++;
		}
		void input(double n)
		{
			a1.push_back(n);
		}
		void input(char n)
		{
			a2.push_back(n);
		}
		void input(string n)
		{
			a3.push_back(n);
		}
		void sorting()
		{
			if(a.size()!=0)
			{sort(a.begin(),a.end());
			}
			if(a1.size()!=0)
			{sort(a1.begin(),a1.end());
			}
			if(a2.size()!=0)
			{sort(a2.begin(),a2.end());
			}
			if(a3.size()!=0)
			{sort(a3.begin(),a3.end());
			}
		}
		int binary(int x)
		{
			int s=0,l=a.size()-1,mid;
			for(int i:a)
            {
                cout<<i<<" ";
            }
			mid=(s+l)/2;
			while(l<=mid)
			{
				cout<<mid<<endl;
				if(a[mid]==x)
				{
					return mid;
				}
				else if(a[mid]>x)
				{
					l=mid-1;
				}
				else
				{
					s=mid+1;
				}
				mid=s+l/2;
			}
			return -1;
		}
		int binary(double x)
		{
			int s=0,l=a.size(),c=0,mid;
			for(double i:a)
            {
                cout<<i<<" ";
            }
			do
			{
				c++;
				mid=s+l/2;
				if(a1[mid]==x)
				{
					return mid;
				}
				if(a1[mid]>x)
				{
					l=mid-1;
				}
				if(a1[mid]<x)
				{
					s=mid+1;
				}
			}while(l<=mid);
			return -1;
		}
		int binary(char x)
		{
			int s=0,i,l=a2.size(),c=0,mid;
			for(i:a)
            {
                cout<<i<<" ";
            }
			do
			{
				c++;
				mid=s+l/2;
				if(a2[mid]==x)
				{
					return mid;
				}
				if(a2[mid]>x)
				{
					l=mid-1;
				}
				if(a2[mid]<x)
				{
					s=mid+1;
				}
			}while(l<=mid);
			return -1;
		}
		int binary(string x)
		{
			int s=0,l=a3.size()-1,c=0,mid;
			mid=s+l/2;
			while(s<=l)
			{
                if(a3[mid]==x)
				{
					return mid;
				}
				if(a3[mid] > x)
				{
					l=mid-1;
				}
				else if(a3[mid]<x)
				{
					s=mid+1;
				}
				mid=(s+l)/2;
			}
			return -1;
		}
};
int main()
{
	bin b;
	int ch;
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
                    b.input(n);
                    cout<<"do you want to add more elements? 1. yes 2. no\n";
                    cin>>m;
                }while(m!=0);
                b.sorting();
                int x;
                cout<<"enter the value to be searched in array:-";
                cin>>x;
                int k=b.binary(x);
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
                    b.input(n);
                    cout<<"do you want to add more elements? 1. yes 2. no\n";
                    cin>>m;
                }while(m!=0);
                b.sorting();
                double x;
                cout<<"enter the value to be searched in array:-";
                cin>>x;
                int k=b.binary(x);
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
                    b.input(n);
                    cout<<"do you want to add more elements? 1. yes 2. no\n";
                    cin>>m;
                }while(m!=0);
                b.sorting();
                char x;
                cout<<"enter the value to be searched in array:-";
                cin>>x;
                int k=b.binary(x);
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
                    b.input(n);
                    cout<<"do you want to add more elements? 1. yes 2. no\n";
                    cin>>m;
                }while(m!=0);
                b.sorting();
                string x;
                cout<<"enter the value to be searched in array:-";
                cin>>x;
                int k=b.binary(x);
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
