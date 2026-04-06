#include<iostream>
using namespace std;
int main(){
    int limit, flag;
    cout << "Enter upper limit: ";
    cin >> limit;
    for(int i=2; i<=limit; i++){
        flag=0;
        for(int j=2;j<i; j++){
            if(i%j==0){
                flag = 1;
                break;
            }
        }
        if(flag==0){
            cout << i << ",";
        }
    }
}