#include <iostream>
using namespace std ;
void display ( char ch = '*' , int no = 3 ) {
    for ( int i = 0 ; i < no ; i ++ ){
        cout << ch << "\t" ;
    }
    cout << endl ;
}
int addNumber ( int a , int b = 7 , int c = 19 ){
    return ( a + b + c) ;
}
int main () {
    cout << "Calling Function With One Argument : " << addNumber ( 2 ) << endl ;
    cout << "Calling Function With Two Arguments : " << addNumber ( 2 , 5 ) << endl ;
    cout << "Calling Function With Arguments : " << addNumber ( 1 , 2 , 3 ) << endl ;
    
    cout << "Calling Function Without Arguments : " << endl ;
    display () ;
    cout << "Calling Function With One Default Argument : " << endl ;
    display ( '@' ) ;
    cout << "Calling Function With Arguments : " << endl ;
    display ( '&' , 6 ) ;
    return 0;
}