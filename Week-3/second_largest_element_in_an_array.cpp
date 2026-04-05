#include<iostream>
using namespace std;
int main()
{
    int arr[10]={23,45,6,7,54,6,4,99,7,6};
    int larg=arr[0];
    int second_largest=-1;
    int len=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<len;i++){
        if(arr[i]>larg){
            larg=arr[i];
        }
    }
    for(int i=0;i<len;i++){
        if(arr[i]>second_largest && arr[i]!=larg){
            second_largest=arr[i];
        }
    }
    cout<<"Second largest:"<<second_largest;
} 