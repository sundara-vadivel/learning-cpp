#include <iostream>
#include <ctime>

int main()
{
    srand(time(0));
    int randNum = rand() % 5 + 1;

    switch(randNum){
        case 1: std::cout << "You won movie tickets!\n";
                break;
        case 2: std::cout << "You won laliga match tickets\n";
                break;
        case 3: std::cout << "You won an iphone\n";
                break;
        case 4: std::cout << "You won coupon for H&M\n";
                break;
        case 5: std::cout << "You won  Ilayaraja concert tickets\n";
                break;
    }

    return 0;
}