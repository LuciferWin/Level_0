#include <iostream>
using namespace std ;
int main () {
    
    int times , number;
    int positiveCount = 0 , negativeCount = 0 , zeroCount = 0;

    cout << "How Many Numbers do You Want To type : " ;
    cin >> times ;

    for ( int i = 1 ; i <= times ; i ++ ) {
        cout << i << ". Enter any Number : " ;
        cin >>  number ;

        if ( number < 0 ) {
            negativeCount ++ ;
        }

        if ( number > 0 ) {
            positiveCount ++ ;
        }

        if ( number == 0 ) {
            zeroCount ++ ;
        }
    }

    cout << "Numbers of Zero : " << zeroCount << endl ;
    cout << "Numbers of Positive : " << positiveCount << endl ;
    cout << "Numbers of Negative : " << negativeCount << endl ;

    return 0;
}