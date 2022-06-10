#include <iostream>
using namespace std ;
int main () {
    
    float price, quantity, total ;
    const float discountOffer = 5000 ;

    cout << "Enter Price : " ;
    cin >> price ;

    cout << "Enter Quantity : " ;
    cin >> quantity ;

    total = price * quantity ;

    if ( total >= discountOffer ) {
        total = total - ( total * 0.1 ) ;
        cout << "Total Expense : " << total ;
    } else {
        cout << "Total Expnese : " << total ;
    }

    return 0;
}