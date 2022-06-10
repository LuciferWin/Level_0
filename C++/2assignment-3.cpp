#include <iostream>
using namespace std ;
int main () {
    
    const string uName = "mmit" ;
    const string uPass = "admin123" ;
    string name, password ;

    cout << "Enter Username : " ;
    cin >> name ;

    cout << "Enter Passoword : " ;
    cin >> password ;

    if ( name == uName && password == uPass ) {
        cout << "Login Success !" << endl ;
    } else if ( name == uName && password != uPass ) {
        cout << "Password Incorrect !" << endl ;
    } else if ( name != uName && password == uPass ) {
        cout << "Username Incorrect !" << endl ;
    } else if (name  != uName && password != uPass ) {
        cout << "Both Username & Password Incorrect !" << endl ;
    }

    return 0;
}