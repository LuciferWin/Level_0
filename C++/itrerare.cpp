#include <iostream>
using namespace std ;
int main () {
    // 1 : Initialize
    int i = 1 ;
    // 2 : Condition
    while ( i <= 10 ) {
        
        cout << i ;
        // 3 : Increment or Decrement
        i ++ ;
    }

    for ( i = 0 ; i <= 10 ; i++ ) {
        cout << "Hello : " << i << endl ;
    }

    for ( int a = 1, j = 10 ; ( a <= 5 && j >= 1 ) ; a ++ , j -- ) {
        cout << " a = " << a << "\t" << " j = " << j << endl ;
    }
    return 0;
}
