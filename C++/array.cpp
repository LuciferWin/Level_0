#include <iostream>
using namespace std ;
int main () {
    
    int mark1 [] = { 100 , 50 , 60 } ;
    int mark2 [ 800 ] = {} ;
    int mark3 [] = { 100 , 50 , 68 , 90 , 70 , 85 } ;

    cout << "Size of int data type : " << sizeof( int ) << " bytes " << endl ;
    cout << "Size of  mark1 array : " << sizeof( mark1 ) << " bytes " << endl ; 
    cout << "Size of  mark2 array : " << sizeof( mark2 ) << " bytes " << endl ; 

    cout << "Length of mark1 : " << sizeof( mark1 ) / sizeof( int ) << endl ;
    cout << "Length of mark2 : " << sizeof( mark2 ) / sizeof( int ) << endl ;
    cout << "Length of mark3 : " << sizeof( mark3 ) / sizeof( int ) << endl ;


    return 0;
}