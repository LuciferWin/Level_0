#include <iostream>
using namespace std ;
int main () {
    int num ; 

    cout << "Enter A Number : " ;
    cin >> num ;

    if ( num >= 0 && num <= 9 ) {
        cout << "You Entered One Digit !" << endl ;
    } else {
        cout << "You Entered More Than One Digit !" << endl ;
    }

    if ( num % 2 ) {
        cout << "You Entered an Odd Number !" << endl ;
    } else {
        cout << "You Entered an Even Number !" ;
    }
    return 0;
}