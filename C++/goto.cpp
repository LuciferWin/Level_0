#include <iostream>
using namespace std ;
int main () {
    
    string userName , password ;
    int input ;
    tryAgain :

    cout << "Enter Username : " ;
    cin >> userName ;

    cout << "Enter Password : " ;
    cin >> password ;

    cout << "Enter Number : " ;
    cin >> input ;

    if ( userName != "mmit" || password != "admin123" ) {
        cout << "Username or Password Error !" << endl ;
        goto tryAgain ;
    }

    cout << "Login Success !" << endl ;


    int length = to_string(input).length();
    cout << length ;
    return 0;
}