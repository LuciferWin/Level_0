#include <iostream>
using namespace std ;\
int go ;
string itemList [5] [3] ;
void initializeItemData () {
    for ( int i = 0 ; i < 5 ; i ++ ) {
        for ( int j = 0 ; j < 3 ; j ++ ) {
            cout << "Enter Barcode : " ;
            cin >> itemList [i] [j] ;
            j++ ;
            cout << "Enter Name : ";
            cin >> itemList [i] [j] ;
            j++ ;
            cout << "Enter Price : " ;
            cin >> itemList [i] [j] ;
        }
    }
}
void displayItemData () {
    cout << "\nBarcode\tName\tPrice\n";
    for ( int i = 0 ; i < 5 ; i ++ ) {
        for ( int j = 0 ; j < 3 ; j ++ ) {
            cout << itemList [i] [j] << "\t";
        }
        cout << endl ;
    }
}
void searchItemByBarcode () {
    string barcode ;
    cout << "Enter Barcode to Search Item's Detail : " ;
    cin >> barcode ;
    cout << "\nBarcode\tName\tPrice\n";
    for ( int i = 0 ; i < 5 ; i ++ ) {
        if ( barcode == itemList [i][0]){
            cout << itemList [i][0] << "\t" << itemList [i][1] << "\t" << itemList [i][2] ;
            break ;
        }
    }
}
int main () {
    initializeItemData () ;
    displayItemData () ;
    searchItemByBarcode () ;
}