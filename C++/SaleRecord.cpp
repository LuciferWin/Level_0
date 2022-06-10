#include <iostream>
using namespace std ;
class SaleRecord
{
public:
    string itemName ;
    int unitPrice ;
    int saleQty ;
    void addSaleRecord (string itemName , int unitPrice , int saleQty) {
        this->itemName = itemName ;
        this->unitPrice = unitPrice ;
        this->saleQty = saleQty ;
    }
    int getSubTotal () {
        return (unitPrice * saleQty) ;
    }
    void displayInfo () {
        cout << itemName << "\t" << unitPrice << "\t" << saleQty << "\t" << getSubTotal() << "Ks" << endl ;
    }
};
int main () {
    SaleRecord record1 , record2 , record3 ;
    record1.addSaleRecord ( "Soju" , 6900 , 3 ) ;
    record2.addSaleRecord ( "Burger" , 4200 , 4 ) ;
    record3.addSaleRecord ( "Pizza" , 16000 , 1 ) ;
    cout << "Sale Record " << endl ;
    cout << "Name:\tPrice:\tQty:\tSubTotal:" << endl ;
    record1.displayInfo () ;
    record2.displayInfo () ;
    record3.displayInfo () ;
    return 0;
}