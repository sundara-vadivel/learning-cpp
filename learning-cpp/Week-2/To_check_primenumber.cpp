#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int num, flag;
    cout << "Enter a number: ";
    cin >> num;
    for(int i=2; i<=num; i++){
        flag=0;
        for(int j=2;j*j<i; j++){
            if(i%j==0){
                flag = 1;
                break;
            }
        }
    }
        if(flag==0){
            cout << num << " is  prime number";
        }
        else{
            cout<<num<<" is not a prime number";
        }
}