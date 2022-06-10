#include <iostream>
using namespace std ;
int main () {
    
    int num ;

    cout << "If You Enter 0 , The Program Will Terminate ! " << endl ;

    do {
        cout << "Please Enter A Non-Zero Number : " ;
        cin >> num ;
        if ( num > 0 ) {
            cout << num << " is Positive !" << endl ;
        } else if ( num < 0 ) {
            cout << num << " is Negative !" << endl ;
        } else {
            cout << "Terminating From Program ... ! " << endl ;
        }
        
    } while ( num != 0 ) ;

    

    return 0;
}