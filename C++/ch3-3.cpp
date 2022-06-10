#include <iostream>
using namespace std ;
int main () {
    
    int num1, num2, num3, maxNum ;

    cout << "Enter Any Three Numbers : " ;
    cin >> num1 >> num2 >> num3 ;

    maxNum = num1 ;

    if ( num2 > maxNum ) {
        maxNum = num2 ;
    }

    if ( num3 > maxNum ) {
        maxNum = num3 ;
    }

    cout << "\nThe largest of " << num1 << ", " << num2 << " and " << num3 << " is " << maxNum << "!";

    return 0;
}