#include <iostream>
using namespace std ;

void changeValue ( int num ) {

    num = num + 20 ;
    cout << "Value Inside Function : " << num << endl ;

}

int main () {
    
   int num = 10 ;

   cout << "Before Fumction Call : " << num << endl ;
   changeValue( num ) ;
   cout << "After Function Call : " << num << endl ;

    return 0;
}