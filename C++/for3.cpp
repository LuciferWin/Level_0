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
    }
    
    avg = ( float ) sum / count ;

    cout << "Sum of " << startNum << " to " << endNum << " is : " << sum << endl ;
    cout << "Total Count is  : " << count << endl ;
    cout << "Average is : " << avg << endl ;

    return 0;
}