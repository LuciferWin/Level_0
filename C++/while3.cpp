#include <iostream>
using namespace std ;
int main () {
    
    int start, end, sum = 0, count = 0 ;
    float average ;

    cout << "Enter Start Number : " ;
    cin >> start ;

    cout << "Enter End Number : " ;
    cin >> end ;

    while ( start <= end ) {

        sum += start ;
        count ++ ;
        start ++ ;

    }

    average = ( float ) sum / count ;

    cout << "Sum of " << start << " to " << end << " is : " << sum << endl ;
    cout << "Total Number Count : " << count << endl ;
    cout << "Average : " << average << endl ;

    return 0;
}