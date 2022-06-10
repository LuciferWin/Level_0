#include <iostream>
using namespace std ;
int main () {
    
    int mark [ 5 ] ;
    int i = 0 ;

    while ( i < 5) {
        cout << "Enter Mark : " ;
        cin >> mark [ i ] ;
        i ++ ;
    }
    cout << " Your Marks : " << endl ;
    int sum = 0 ;
    for ( i = 0 ; i < 5 ; i ++ ) {
        cout << mark [ i ] << "\t" ;
        sum += mark [ i ] ;
    }
    cout << "\nTotal mark : " << sum << endl ;

    return 0;
}