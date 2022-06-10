#include <iostream>
using namespace std ;
int main () {
    
    int i = 0 ;
    
    while ( i < 10 ) {

        cout << i << " Hello World !" << endl ;
        i ++ ;

    }

    cout << "Value of i after while loop : " << i << endl ;

    int j = 100 ;
    while ( j > 10 ) {
        cout << j << endl ;
        j -= 5 ;
    }

    return 0;
}