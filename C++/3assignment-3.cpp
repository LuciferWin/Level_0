#include <iostream>
using namespace std ;
int main () {
    
    int start , end , number ;

    cout << "Enter Start Value : " ;
    cin >> start ;

    cout << "Enter End Value : " ;
    cin >> end ;

    cout << "The Numbers that divisible by 8 & 5 is : " << endl ;
    for ( int i = start ; i <= end ; i ++ ) {

        if ( i % 5 == 0 && i % 8 ==0 ) {
            cout << i << endl ;
        }
        
    }

    cout << "The Numbers that divisible by only 8 is : " << endl ;
    for ( int i = start ; i <= end ; i ++ ) {

        if ( i % 8 ==0  && i % 5 != 0) {
            cout << i << endl ;
        }

    }

    cout << "The Numbers that divisible by only 5 is : " << endl ;
    for ( int i = start ; i <= end ; i ++ ) {

        if ( i % 5 == 0 && i % 8 != 0) {
            cout << i << endl ;
        }

    }

    cout << "The Numbers that not divisible by 8 & 5 is : " << endl ;
    for ( int i = start ; i <= end ; i ++ ) {

        if ( i % 5 != 0 && i % 8 !=0 ) {
            cout << i << endl ;
        }

    }

    return 0;
}