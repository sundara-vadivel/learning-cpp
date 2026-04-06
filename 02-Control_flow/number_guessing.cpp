#include<iostream>
#include<ctime>
using namespace std;
int main(){
    int num,guess,tries=0;
    srand(time(NULL));
    num=(rand()%100)+1;
    do{
        cout<<"\nGuess the number(1-100):";
        cin>>guess;
        tries++;

        if(guess>num){
            cout<<"Too higher";
        }
        else if(guess<num){
            cout<<"Too lower";
        }
        else{
            cout<<"You guessed correctly.\n";
        }
    }while(num!=guess);
    cout<<"Total tries:"<<tries;
    cout<<"\n*****END*****";
}