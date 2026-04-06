#include<iostream>
using namespace std;
int main()
{
    int arr[10]={2,3,4,5654,565,6764,4,45,45,56777};
    int larg=arr[0];
    int second_largest=-1;
    int len=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<len;i++){
        if (arr[i]>larg )
        {
            second_largest=larg;
            larg=arr[i];
        }
        else if(arr[i]<larg && arr[i]>second_largest){
            second_largest=arr[i];
        }
        
    }
    
    
    /*for(int i=0;i<len;i++){
        if(arr[i]>larg){
            larg=arr[i];
        }
    }
    for(int i=0;i<len;i++){
        if(arr[i]>second_largest && arr[i]!=larg){
            second_largest=arr[i];
        }
    } */
   
    cout<<"Second largest:"<<second_largest;


} 