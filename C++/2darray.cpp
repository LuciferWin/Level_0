#include <iostream>
using namespace std ;
int main () {
    
    int num [2] [3] ;

    num [0] [0] = 1 ;
    num [0] [1] = 2 ;
    num [0] [2] = 3 ;

    num [1] [0] = 4 ;
    num [1] [1] = 5 ;
    num [1] [2] = 6 ;

    cout << "-----Elements-----" << endl ;
    cout << num [0] [0] <<"\t" ;
    cout << num [0] [1] <<"\t" ;
    cout << num [0] [2] <<"\t" ;
    cout << endl ;
    cout << num [1] [0] <<"\t" ;
    cout << num [1] [1] <<"\t" ;
    cout << num [1] [2] <<"\t" ;

    return 0;
}