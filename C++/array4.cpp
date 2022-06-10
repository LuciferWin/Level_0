#include <iostream>
using namespace std ;
int main () {
    
    int len = 4 ;
    int numbers [ ] ={ 23 , 45 , 53 , 78 } ;

    cout << "Original Array " << endl ;

    for ( int i = 0 ; i < len ; i ++ ) {
        cout << numbers [ i ] << '\t' ;

    }

    cout << "\nReverse Array " << endl ;

    for ( int i = len -1 ; i >= 0 ; i -- ) {
        cout << numbers [ i ] << '\t';

    }
    cout << endl ;

    int largest = numbers [ 0 ] ;

    for ( int i = 1 ; i < len ; i ++ ) {
        if ( largest < numbers [ i ] ) {
            largest = numbers [ i ] ;
        }
    }
    cout << "Largest Number in Array is : " << largest << endl ;



    return 0;
}