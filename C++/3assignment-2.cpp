#include <iostream>
using namespace std ;
int main () {
    
    int number , sum = 0 , mod ;

    cout << "Enter The Number You Want to sum : " ;
    cin >> number ;

    cout << "The Sum of digit " << number << " is : " ;

    int times = to_string(number).length();

    for ( int i = 0 ; i < times ; i++ ) {
        mod = number % 10 ;
        sum += mod ;
        number /= 10 ;
    }
    
    cout << sum << endl ;

    return 0;
}