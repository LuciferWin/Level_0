#include <iostream>
using namespace std ;
class Product
{
public:
    string barCode ;
private:
    string Name ;
    float Price ;
public:
    Product () {
        barCode = "0000" ;
        Name = "Unknown" ;
        Price = 0.0 ;
    }
    Product ( string barCode , string Name , float Price ) {
        this->barCode = barCode ;
        this->Name = Name ;
        this->Price = Price ;
    }
    void showData () {
        cout << barCode << "\t" << Name << "\t" << Price << endl ;
    }
};

int main () {
    // product1.barCode = "1001" ;
    // product1.Name = "Cake" ;
    // product1.Price = "1200" ;
    string name ;
    string code ;
    float price ;
    cout << "Enter Product Name : " ;
    cin >> name ; 
    cout << "Enter Product Code : " ;
    cin >> code ; 
    cout << "Enter Price : " ;
    cin >> price ;
    Product product1 (code,name,price) ;
    product1.showData () ;
    return 0;
}