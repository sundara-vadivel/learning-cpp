#include<iostream>
using namespace std;
void Reverse(int arr[],int start,int end){
    while (start<=end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}
int Rotateleft(int arr[],int n,int d)
{   
    d=d%n;
    Reverse(arr,0,d-1);
    Reverse(arr,d,n-1);
    Reverse(arr,0,n-1);
    return 0;

}
int RotateRight(int arr[],int n,int d){
    d=d%n;
    Reverse(arr,n-d,n-1);
    Reverse(arr,0,n-d-1);
    Reverse(arr,0,n-1);
    return 0;
}
int main()
{
   int arr[]={1,2,3,4,5,6,7,8};
   int n=sizeof(arr)/sizeof(arr[0]);
   cout<<"enter d:";
   int d;
   cin>>d;
   int arr2[8];
    for(int a=0;a<n;a++){
        arr2[a]=arr[a];
    }

   Rotateleft(arr,n,d);
   cout << "left rotation by " << d << ": ";
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    
    RotateRight(arr2,n,d);
    cout << "Right rotation by " << d << ": ";
    for (int i = 0; i < n; i++)
    {
        cout << arr2[i] << " ";
    }
    cout << endl;

}

