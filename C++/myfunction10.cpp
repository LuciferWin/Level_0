#include <iostream>
using namespace std ;
bool equal ( int arg1 , int arg2 ) {
    return ( arg1 == arg2 ) ? true : false ;
}
bool equal ( double arg1 , double arg2 ) {
    return ( arg1 == arg2 ) ? true : false ;
}
bool equal ( char arg1 , char arg2 ) {
    return ( arg1 == arg2 ) ? true : false ;
}
bool equal ( string arg1 , string arg2 ) {
    return ( arg1 == arg2 ) ? true : false ;
}
int max ( int n1 , int n2 ) {
    return ( n1 > n2 ) ? n1 : n2 ;
}
int max ( int n1 , int n2 , int n3 ) {
    int m_val = n1 ;
    if ( m_val < n2 ) {
        m_val = n2 ;
    }
    if ( m_val < n3 ) {
        m_val = n3 ;
    }
    return m_val ;
}
int main () {
    cout << " 9 is equal to 9 : " << equal ( 9 , 9 ) << endl ;
    cout << " 3.3 is equal to 4.5 : " << equal ( 3.3 , 4.5 ) << endl ;
    cout << " Danny is equal to Danny : " << equal ( "Danny" , "Danny" ) << endl ;
    cout << " Xy is equal to XY : " << equal ( "Xy" , "XY" ) << endl ;
    cout << "Max of 5 and 2 is : " << max ( 5 , 2 ) << endl ;
    cout << "Max of 5, 13 and 55 is : " << max ( 5 , 13 , 55 ) << endl ;

    return 0 ;
}