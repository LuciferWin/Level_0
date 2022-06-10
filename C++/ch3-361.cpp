#include <iostream>
using namespace std ;
int main () {
    
    int num ;
    string result ;

    cout << "Enter Any Number : " ;
    cin >> num ;

    result = ( num % 2 == 0 ) ? "Even !" : "Odd !" ;
    //result = ( num % 2 ) ? "Odd !" : "Even !" ;

    cout << num << " is " << result ;

    return 0;
}