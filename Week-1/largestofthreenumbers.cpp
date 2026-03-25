#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter Three values:";
    cin>>a>>b>>c;
    if(a>b)
    {
        if(a>c)
        {
            cout<<a<<" is the largest";
        }
        else
        {
            cout<<c<<" is the largest";
        }
    }
    else if(b>c)
        {
        cout<<b<<" is the largest";
        }
    else
        {
        cout<<c<<" is the largest";  
        }
    
    }

