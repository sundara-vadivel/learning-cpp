#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int limit, num, nd, s, d; 
    cout << "Enter a limit: ";
    cin >> limit;
    
    for(int i = 1; i <= limit; i++){
        
        int temp = i;
        nd=0;
        while(temp > 0){
            nd++;
            temp /= 10;
        }
        
        temp = i;
        s=0;
        while(temp > 0){
            d = temp % 10;
            s += pow(d, nd);
            temp /= 10;
        }
        
        if(s == i){
            cout << i << " ";
        }
    }
    return 0;
}