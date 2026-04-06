#include<iostream>
#include<climits>
using namespace std;
int main(){
    int num,n;
    cout<<"enter a num:";
    cin>>num;
    int f=1;
    for(int i=num;i>1;i--){
        f*=i;
    }
    cout<<"Factorial of "<<num<<":"<<f<<"\n";
    cout<<INT_MAX;
}