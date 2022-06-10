#include <iostream>
using namespace std ;
int main () {
    
    int a = 2 ;
    a -- ;
    cout << "Value of a after decrement : a = " << a -- << endl ;
    cout << "After cout a and pre decrement = " << -- a << endl ;

    int b = 5 ;
    int d = a + --b ;
    cout << d << endl ;

    d = a - b--;
    cout << d << endl ;
    
    return 0;
}