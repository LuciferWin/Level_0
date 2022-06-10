#include <iostream>
using namespace std ;
int main () {
    
    int count , i = 1 ;

    cout << "Enter How Many Odd Number You Would Like To Print ? : " ;
    cin >> count ;

    while ( count > 0  ) {
        if ( i % 2 ) {
            cout << i << endl ;
            count -- ;
        }
        i ++ ;
    }

    return 0;
}