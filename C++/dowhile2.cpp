#include <iostream>
using namespace std ;
int main () {
    
    char ch ;

    cout << "Please Enter a character , 'q' to exit the program !" << endl ;
    cin >> ch ;

    do {
        cout << "Enter A Character : " ;
        cin >> ch ;

        if ( ch != 'q' ) {
            if ( ch >= '0' && ch <= '9' ) {
            cout << ch << " is a digit !" << endl ;
            } else {
                cout << ch << " is not a digit !" << endl ;
            }
        } else {
            cout << "Terminating From The Program ... !" << endl ;
        }

    } while ( ch != 'q' ) ;

    

    return 0;
}