#include <iostream>
#include <string>
using namespace std ;
class Product
{
private:
    string name ;
    float price ;
    int barCode ;
public:
    Product () {

    }
    void setName ( string name ) { // Setter Function
        this->name = name ;
    }
    string getName () { // Getter Function
        return this->name ;
    }
    void setPrice ( float price ) {
        this->price = price ;
    }
    float getPrice () {
        return this->price ;
    }
    void setBarCode ( int code ) {
        if ( code >= 1000 && code <= 9999 ) {
            this->barCode = code ;
        } else {
            cout << "Invalid Code !" << code << endl ;
        }
    }
    int getBarCode () {
        return this->barCode ;
    }
};
int main () {
    string productName ;
    float productPrice ;
    int productCode ;
    Product product1 , product2 ;

    // product1.setName ( "Hamburger" ) ; // Calling Setter Function
    // cout << product1.getName () << endl ; // Calling Getter Function
    // product1.setPrice ( 2500 ) ;
    // cout << product1.getPrice () << " Ks" << endl ;
    // product1.setBarCode ( 1001 ) ;
    // cout << product1.getBarCode () ;

    // cout << "\nEnter Product Name for Product 2 : " ;
    // getline ( cin , productName ) ;
    // cout << "Enter Product Price for Product 2 : " ;
    // cin >> productPrice ;
    // cout << "Enter Product Barcode for Product 2 : " ;
    // cin >> productCode ;
    // product2.setName ( productName ) ;
    // product2.setPrice ( productPrice ) ;
    // product2.setBarCode ( productCode ) ;
    // cout << product2.getName () << "\t" << product2.getPrice () << "\t" << product2.getBarCode () << endl ;

    Product products [3] ; // Object Array
    for ( int i = 0 ; i < 3 ; i ++ ) {
        cout << "\nEnter Product Name for Product " << i + 1 << " : " ;
        // getline ( cin , productName ) ;
        cin >> productName ;
        cout << "Enter Product Price for Product " << i + 1 << " : " ;
        cin >> productPrice ;
        cout << "Enter Product Barcode for Product " << i + 1 << " : " ;
        cin >> productCode ;
        
        products [i].setName ( productName ) ;
        products [i].setPrice ( productPrice ) ;
        products [i].setBarCode ( productCode ) ;
    }
    cout << "\n_____Products Information_____" << endl ;
    cout << "No\tName\t\tPrice\tBarcode\n" << endl ;
    for ( int i = 0 ; i < 3 ; i ++ ) {
        cout << i + 1 << "\t" << products [i].getName () << "\t\t" << products [i].getPrice () << "\t" << products [i].getBarCode () << endl ;
    }
    return 0;
}