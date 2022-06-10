#include <iostream>
using namespace std ;
int main () {
    int firstNumber, secondNumber ;
    bool result ;
    
    cout << "Enter First Number : " ;
    cin >> firstNumber ;

    cout << "Enter Second Number : " ;
    cin >> secondNumber ;

    result = (firstNumber == secondNumber) ; // compare firstNumber is equal to secondNumber !
    cout << firstNumber << " == " << secondNumber << " ?  is  : " << result << endl ;

    result = (firstNumber != secondNumber) ; // compare firstNumber is not equal to secondNumber !
    cout << firstNumber << " != " << secondNumber << " ?  is  : " << result << endl ;

    result = (firstNumber > secondNumber) ; // compare firstNumber is greater than secondNumber !
    cout << firstNumber << " > " << secondNumber << " ?  is  : " << result << endl ;

    result = (firstNumber < secondNumber) ; // compare firstNumber is less than secondNumber !
    cout << firstNumber << " < " << secondNumber << " ?  is  : " << result << endl ;


    return 0;
}