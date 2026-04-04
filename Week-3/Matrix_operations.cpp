#include<iostream>
using namespace std;
int main(){
    int a[3][3],b[3][3],c[3][3];
    char  OP;
    cout<<"Enter elements for First Matrix:";
    for(int i=0;i<=2;i++){
        for(int j=0;j<=2;j++){
            cin>>a[i][j];
        }
    }
    cout<<"Enter elements for Second  Matrix:";
    for(int i=0;i<=2;i++){
        for(int j=0;j<=2;j++){
            cin>>b[i][j];
        }
    }
    cout<<"Enter a Operation(+,-,*):";
    cin>>OP;
    switch (OP)
    {
    case '+':
        for(int i=0;i<=2;i++){
        for(int j=0;j<=2;j++){
            c[i][j]=a[i][j]+b[i][j];
            cout<<c[i][j]<<" ";
        }
        cout<<"\n";
    }
        break;

    case '-':
        for(int i=0;i<=2;i++){
        for(int j=0;j<=2;j++){
            c[i][j]=a[i][j]-b[i][j];
            cout<<c[i][j]<<" ";
        }
        cout<<"\n";
    }
        break;

    case '*':
        for(int i=0;i<=2;i++){
        for(int j=0;j<=2;j++){
            c[i][j]=a[i][j]*b[i][j];
            cout<<c[i][j]<<" ";
        }
        cout<<"\n";
    }
        break;


    
    default:
        cout<<"Error:Enter a valid Operation!!!!";
        break;
    }
}