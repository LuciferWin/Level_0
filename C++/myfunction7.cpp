#include <iostream>
using namespace std ;

string brands[5] ;
int count = 0 ;

void addBrand ( string brand ) {

    brands[count] = brand ;
    count ++ ;

}

void showBrand () {

    for ( int i = 0 ; i < count ; i ++ ) {

        cout << brands[i] << endl ;

    }

}

int main () {
    
    addBrand ( "IPhone" ) ;
    addBrand ( "Samsung" ) ;
    addBrand ( "Oppo" ) ;
    addBrand ( "Vivo" ) ;
    addBrand ( "Mi" ) ;
    showBrand () ;

    return 0;
}