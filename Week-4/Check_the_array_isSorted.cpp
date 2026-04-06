#include<iostream>
using namespace std;
int IsSorted(int arr[],int n){
        for(int i=0;i<n;i++){
        if (arr[i]>arr[i+1]){
            return false;
    }
}
    return true;

}

int main(){
    int arr[]={1,2,3,1,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    if(IsSorted(arr,n)){
        cout<<"Sorted";
    }
    else{
        cout<<"Not Sorted";
    }


}