#include <iostream>
using namespace std ;
class Base
{
private :
    int x ;
    int y ;
public :
    Base () {
        cout << "\nThis is Base without Parameters .\n" ;
    }
    Base ( int x , int y ) {
        cout << "\nThis is Base with patameters .\n" ;
        this->x = x ;
        this->y = y ;
    }
};
class Derived : public Base
{
private:
    int z ;
public:
    Derived () {
        cout << "\nThis is Derived without Parameters .\n" ;
    }
    Derived ( int i , int j , int k ) : Base ( i , j ) { //*********************
        cout << "\nThis is Derived with Parameters .\n" ;
        this->z = k ;
    }
};
int main () {
    Derived d1 ;
    Derived d2 ( 1 , 2 , 3 ) ;
    return 0;
}