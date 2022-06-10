#include <iostream>
using namespace std ;
int main () {

    double price , discount , finalPrice ;
    
    cout << "Enter Product Price : " ;
    cin >> price ;

    cout << "Enter Discount Value (%) : " ;
    cin >> discount ; 

    finalPrice = price - (price * discount * 0.01);

    cout << "After discount, price : " << finalPrice ;
    
    return 0;
}