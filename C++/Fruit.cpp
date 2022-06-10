#include <iostream>
using namespace std ;
class Fruit
{
public:
    string name ;
    int price ;
    void setData ( string na , int price ) {
        name = na ;
        this -> price = price ;

    }
    void showData () {
        cout << "\nName : " << name ;
        cout << "\nPrice : " << price << endl ;
    }
};

int main () {
    Fruit fruit1 ; 
    Fruit fruit2 ;

    cout << "\nData of Fruit 1 !" ;
    fruit1.setData( "Mango" , 700 ) ;
    fruit1.showData () ;

    cout << "\nUpdating Fruit 1 Data !" ;
    fruit1.name = "Banana" ; // Updatig Public Member Data
    fruit1.price = 1000 ; // Updatin Public Member Data
    fruit1.showData () ;

    cout << "\nData of Fruit 2 : " ;
    fruit2.showData () ;

    cout << "\nUpdating Fruit 2 Data !" ;
    fruit2.setData ( "Water Melon" , 1800 ) ;
    fruit2.showData () ;
    
    // Fruit name1 ;
    // Fruit name2 ;

    // name1.setData ( "Strawberry" , 500 ) ;
    // name1.showData () ;



    return 0;
}