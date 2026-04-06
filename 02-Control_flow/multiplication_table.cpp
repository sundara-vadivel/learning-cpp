#include<iostream>
using namespace std;
int main(){
    int val;
    cout<<"Enter a value for multiplication table:";
    cin>>val;
    for(int i=1;i<=20;i++){
        cout<<val<<"*"<<i<<"="<<val*i;
        cout<<"\n";
    }

}