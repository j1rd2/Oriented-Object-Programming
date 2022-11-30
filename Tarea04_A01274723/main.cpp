#include <iostream>
#include "DivideByZeroException.h"
using namespace std;

double quotient(int numerator, int denominator){
    if (denominator == 0){
        throw DivideByZeroException{};
    }

    return static_cast<double>(numerator)/denominator;
}

int main(){

    int number1;
    int number2;

    cout << "Enter two integers (end-of-file to end)";

    while(cin >> number1 >> number2){
        try{
            double result{quotient(number1, number2)};
            cout << "The quotient is: " << result << endl;
        }

        catch (const DivideByZeroException& divideByZeroExeption){
            cout << "Exeption ocurredP: " << divideByZeroExeption.what() << endl;
        }

        cout << "\nEnter to integers (end-of-file to end) ";
    }

cout << endl;

}