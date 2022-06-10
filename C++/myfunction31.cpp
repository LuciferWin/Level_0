#include <iostream>
using namespace std ;
//pass by referennce call by reference
void changeValue ( int *ip ) {

    cout << "Address in function : " << ip << endl ;
    *ip = *ip + 20 ;
    cout << "Value Inside Function : " << *ip << endl ;

}

int main () {
    
   int num = 10 ;
    cout << "Address of num : " << &num << endl ;
   cout << "Before Fumction Call : " << num << endl ;
   changeValue( &num ) ;
   cout << "After Function Call : " << num << endl ;
   
   int num1 = 50 ;
   changeValue ( &num1 ) ;

    return 0;
}