#include<iostream>
using namespace std;
int main()
{
    int y;
    cout<<"Enter a year:";
    cin>>y;
    if((y%4==0 && y%100!=0) or (y%400==0))
    {
        cout<<y<<" is a Leap year.";
    }
    else
    {
        cout<<y<<" is not a leap year.";
    }
}