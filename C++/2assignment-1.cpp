#include <iostream>
using namespace std ;
int main () {
    
    int num ;
    cout << "Enter Non-Zero Number : " << endl ;
    cin >> num ;

    if ( num == 0 ) {
        cout << "The Number is Zero !" ;
    } else if ( num < 0 ) {
        cout << "The Number is Negative ! "  << endl ;
    } else if ( num > 0) {
        cout << "The Number is Positive ! " << endl ;
    }

    return 0;
}