#include<iostream>
using namespace std;
int main(){
    int arr[]={5,6,7,4,6,1};
    int smallest=arr[0];
    int second_smallest=-1;
    int n=sizeof(arr)/sizeof(arr[0]);
    for (int i=0;i<n;i++){
        if(arr[i]<smallest){
            second_smallest=smallest;
            smallest=arr[i];
        }
        else if(arr[i]>smallest && arr[i]<second_smallest){
            second_smallest=arr[i];
        }
    }
        
    cout<<"Second smallest:"<<second_smallest;
}
