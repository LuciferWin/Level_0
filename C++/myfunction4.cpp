#include <iostream>
using namespace std ;

string cities [3] ;

void initializeData () {

    for ( int i = 0 ; i < 3 ; i ++ ) {

        cout << "Enter City Name : " ;
        getline ( cin , cities [i] ) ;

    }

}

void showData () {

    cout << "_____Your Cities_____" << endl ;

    for ( int i = 0 ; i < 4 ; i ++ ) {

        cout << "\t" << cities [i] << endl ;

    }

}

int main () {
    
    initializeData () ;
    showData () ;

    return 0;
}