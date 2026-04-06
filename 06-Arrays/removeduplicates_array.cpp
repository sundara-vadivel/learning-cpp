#include<iostream>
using namespace std;
int main(){
    int arr[]={1,1,2,3,4,4,4,5,5,6,6,7,7,9,10,10,10,12};  // using sorted array
    int i=0;
    int len=sizeof(arr)/sizeof(arr[0]);
    for(int j=0;j<len;j++){
        if(arr[i]!=arr[j]){
        arr[i+1]=arr[j];
        i++;
        }
    }
    for(int k=0;k<=i;k++){
        cout<<arr[k]<< " ";
    }
    cout<<"\n"<<i+1<<" unique elements";
}
