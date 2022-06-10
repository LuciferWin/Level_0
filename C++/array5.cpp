#include <iostream>
using namespace std ;
int main () {
    
    string brands [ 5 ] = { "Samsung" , "Iphone" , "Vivo" , "Oppo" , "Mi" } ;
    string search_name ;
    int index = -1 ;

    cout << "Enter Brand Name : " ;
    getline ( cin , search_name ) ;

    for ( int i = 0 ; i < 4 ; i ++ ) {
        if ( search_name == brands [ i ] ) {
            index = i ;
            break ;
        } 
    }

    if ( index == -1 ) {
        cout << "Not Found !" << endl ;

    } else {
        cout << "Found at Position : " << index << endl ;
    }
    

    return 0;
}