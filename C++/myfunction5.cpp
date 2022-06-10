#include <iostream>
using namespace std ;

void checkLogin () {

    string email , password ;
    int num ;

    input:cout << "Enter Email : " ;
    cin >> email ;

    cout << "Enter Password : " ;
    cin >> password ;

    if ( email == "admin@gmail.com" && password == "password" ) {

        cout << "\tLogin Success" ;

    } else {

        cout << "Login Error !" << endl ;
        cout << "If You Wanna Try Again , \n Please Enter '1' !" << endl ;
        cin >> num ;

        if ( num == 1 ) {

            goto input ; 

        }

    }

    cout << endl ;

}

int main () {
    
    cout << "__________Before Invoking Login Funtion__________" << endl ;
    checkLogin () ;
    cout << "__________After Invoking Login Function__________" << endl ;

    return 0;
}