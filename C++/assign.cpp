#include <iostream>
using namespace std ;
int main () {

    int a = 8 ;
    int b = 7 ;

    cout << "a = " << a << endl ;
    cout << "b = " << b << endl ;

    a += b ;
    cout << "After a += b , a =  " << a << endl ;

    a *= b ;
    cout << "After a *= b , a =  " << a << endl ;

    a -= b ;
    cout << "After a -= b , a =  " << a << endl ;

    a /= b ;
    cout << "After a /= b , a =  " << a << endl ;

    a %= b ;
    cout << "After a %= b , a =  " << a << endl ;

    // seconds :
    // minutes : 60s
    // hours : 3600s
    // 7500s :
    // hours = seconds / 3600 ;

    return 0;

}