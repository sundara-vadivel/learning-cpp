#include<iostream>
using namespace std;

void Ascending(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for(int a=0;a<n;a++)
    {
        cout<<arr[a]<<",";
        
    }
}
 int main()
 {
    int arr[]={23,323,434,232,24,45,6,34,5,4,5656,53,5,90,7,8,2,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    Ascending(arr,n);
    


 }

 