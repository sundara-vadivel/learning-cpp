 #include<iostream>
 using namespace std;

int main() {

    char a;
    double num1;
    double num2;
    double result;

    cout << "********* CALCULATOR ***********\n";

    cout << "Enter either (+ - * /): ";
    cin >>a;

    cout << "Enter value 1: ";
    cin >> num1;

    cout << "Enter value 2: ";
    cin >> num2;

    switch(a){
        case '+':
            result = num1 + num2;
            cout << "result: " << result << '\n';
            break;
        case '-':
            result = num1 - num2;
            cout << "result: " << result << '\n';
            break;
        case '*':
            result = num1 * num2;
            cout << "result: " << result << '\n';
            break;
        case '/':
            result = num1 / num2;
            cout << "result: " << result << '\n';
            break;
        default:
            cout << "That wasn't a valid operator\n";
            break;
    }

    cout << "The End\n";

    return 0;
}

