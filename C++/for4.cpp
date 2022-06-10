#include <iostream>
using namespace std ;
int main () {
    
    int startNum, endNum, sum = 0 , count = 0 ;
    float avg ;

    cout << "Enter Start Number : " ;
    cin >> startNum ;

    cout << "Enter End Number : " ;
    cin >> endNum ;

    for ( int i = startNum ; i <= endNum ; i++ )
    {
        count ++ ;
        sum += i ;
        if( i % 2 ) {
            cout << i << " is Odd !" << endl ;
        }
    }

    return 0;
}