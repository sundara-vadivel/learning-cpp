#include<iostream>
using namespace std;

int area(int l){
    return l*l;
}

int area(int l, int b){
    return l*b;
}

double area(double h,double b){
    return 0.5*h*b;
}

int main(){
    int s,l,b_int;
    double h,b_double;
    cout<<"Enter length of the square:";
    cin>>s;
    cout<<"Area of Square:"<<area(s)<<"\n";
    cout<<"Enter length & bredth of the Rectangle:";
    cin>>l>>b_int;
    cout<<"Area of Rectangle:"<<area(l,b_int)<<"\n";
    cout<<"Enter the height and Base of triangle:";
    cin>>h>>b_double;
    cout<<"Area of Triangle:"<<area(h,b_double)<<"\n";
}