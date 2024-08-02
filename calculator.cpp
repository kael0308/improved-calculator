#include <iostream>
#include <cmath>

using namespace std;

int main(){

    cout << "************CALCULATOR************ \n" ;

    char op;
    double a;
    double b;
    double result;

    cout << "enter #1: ";
    cin >> a;
    cout << "enter a function (+ - / *) ";
    cin >> op;
    cout << "enter #2: ";
    cin >> b;

    switch (op)
    {
    case '+':
        result = a + b;
        cout << "Result: " << result << '\n';
        /* code */
        break;
     case '-':
        result = a - b;
        cout << "Result: " << result << '\n';
        /* code */
        break;
     case '/':
        result = a / b;
        cout << "Result: " << result << '\n';
        /* code */
        break;
     case '*':
        result = a * b;
        cout << "Result: " << result << '\n';
        /* code */
        break;
    
    default:
        cout << "please enter the correct function";
        
    }


    cout << "**********************************";
    return 0;
}