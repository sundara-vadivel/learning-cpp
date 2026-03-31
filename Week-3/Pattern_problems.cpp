#include<iostream>
using namespace std;

void Pattern1(int n){
    for(int row=1;row<=n;row++)
    {
        for(int col=1;col<=n;col++)
        {
            cout<<"* ";
        }
        cout<<"\n";
    }
    cout<<"\n";
}


void Pattern2(int n){
    for(int row=1;row<=n;row++)
    {
        for(int col=1;col<=row;col++)
        {
            cout<<"* ";
        }
        cout<<"\n";
    }
    cout<<"\n";
}

void Pattern3(int n){
    for(int row=1;row<=n;row++)
    {
        for(int col=n;col>=row;col--)
        {
            cout<<"* ";
        }
        cout<<"\n";
    }
    cout<<"\n";
}

void Pattern4(int n){
    for(int row=1;row<=n;row++)
    {
        for(int col=1;col<=row;col++)
        {
            cout<<col<<" ";
        }
        cout<<"\n";
    }
    cout<<"\n";
}

void Pattern5(int n){
    for(int row=1;row<=n*2;row++)
    {
        int p=row>n?2*n-row:row;
        for(int col=1;col<=p;col++)
        {
            cout<<"* ";
        }
        cout<<"\n";
    }
    cout<<"\n";
}



void Pattern6(int n){
    for(int row=1;row<=n*2;row++)
    {
        int p=row<n?row:2*n-row;
        int s=n-p;
        for(int i =1;i<=s;i++){
            cout<<" ";
        }
        for(int col=1;col<=p;col++)
        {
            cout<<"* ";
        }
        cout<<"\n";
    }
    cout<<"\n";
}


void Pattern7(int n){
    for(int row=1;row<=n*2;row++)
    {
        int p=row<n?row:2*n-row;
        int s=n-p;
        for(int i =1;i<=s;i++){
            cout<<" ";
        }
        for(int col=1;col<=2*p-1;col++)
        {
            if( col==1||col==2*p-1){
            cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<"\n";
    }
    cout<<"\n";
}


void Pattern8(int n){
    for(int row=1;row<=n;row++)
    {
       
        int s=n-row;
        for(int i =1;i<=s;i++){
            cout<<" ";
        }
        for(int col=1;col<=row;col++)
        {
        
            cout<<col<<" ";
            
        }
        cout<<"\n";
    }
    cout<<"\n";
}


void Pattern9(int n){
    for(int row=1;row<=n;row++)
    {
        int s=n-row;
        for(int i =1;i<=s;i++){
            cout<<" ";
        }
        for(int col=row;col>=1;col--)
        {
            cout<<col<<"";
        }
        for(int col=2;col<=row;col++){
            cout<<col<<"";
        }
        cout<<"\n";
    }
    cout<<"\n";
}

void Pattern10(int n){
    for(int row=1;row<=n;row++)
    {
        for(int col=1;col<=n;col++)
        {
            if(row==1||col==1||row==n||col==n){
            cout<<"* ";
            }
            else
            {
                cout<<"  ";
            }
        }
        cout<<"\n";
    }
    cout<<"\n";
}

int main()
{   
    int n;
    cout<<"enter a limit:";
    cin>>n;
    Pattern1(n);
    Pattern2(n);
    Pattern3(n);
    Pattern4(n);
    Pattern5(n);
    Pattern6(n);
    Pattern7(n);
    Pattern8(n);
    Pattern9(n);
    Pattern10(n);
}