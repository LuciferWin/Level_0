#include <iostream>
using namespace std ;
int main () {
    
    int a = 20 ;
    int b = 10 ;
    int c = 15 ;
    int d = 5 ;
    int e ;

    e = ( a + b ) * c / d ;// e = ( 20 + 10 ) * 15 / 5 = 30 * 15 / 5 = 450 / 5 = 90 ;
    cout << "Value of (a+b)*c/d is : " << e << endl ;

    e = ( ( a +b ) * c ) / d ;// e = ( ( 20 + 10 ) * 15 ) / 5 = ( 30 * 15 ) / 5 = 450 / 5 = 90; 
    cout << "Value of ( ( a +b ) * c ) / d is : " << e << endl ;

    e = ( a + b ) * ( c / d ) ;// e = ( 20 + 10 ) * ( 15 / 5 ) = 30 * 3 = 90 ;
    cout << "Value of ( a + b ) * ( c / d ) is : " << e << endl ;

    e = a +  b * c  / d ;//e = 20 +  10 * 15  / 5 = 20 + 150 / 5 = 20 + 30 = 50 ;
    cout << "Value of a +  b * c  / d  is : " << e << endl ;

    return 0;
}