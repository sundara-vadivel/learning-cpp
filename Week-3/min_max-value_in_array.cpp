#include<iostream>
#include<conio.h>
using namespace std;
int main(){
int a[]={10,45,44,66,7,565,67,555,45,6,8,6,454,5};
int len=sizeof(a)/sizeof(a[0]);
int small=a[0];
int large=a[0];

 for(int i=1;i<len;i++){
     if(small>a[i])
     {
        small=a[i];
     }
     else if(large<a[i])
     {
        large=a[i];
     }

    }
 cout<<"Smallest value in the array:"<<small<<"\n"<<"Largest value in the array:"<<large;
}