#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int  a,num, nd, s,d; 
    cout << "Enter a num: ";
    cin >> num;
    a=num;
        
    nd=0;
    while( a> 0){
        nd++;
        a /= 10;
    }
        
    a=num;
    s=0;
    while(a > 0){
    d = a % 10;
    s += pow(d, nd);
    a/= 10;
    }
        
    if(s == num){
        cout <<num<<" is a armstrong number";
    }
    else{
        cout<<num<<" is not a armstrong number";
    }
}