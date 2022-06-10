#include <iostream>
using namespace std ;
class Base
{
private : // Can Only Use In This Calss
    int x = 9 ;
protected : // Can Use In Inherited Calss & This Calss
    int y = 20 ;
public : // Can Use Anywhere
    int z = 22 ;
};
class PublicDerived : public Base
{
public :
    void display () {
        cout << "\n__________Public Access Mode__________\n" ;
        cout << "\t\ty = " << y << endl ;
        cout << "\t\tz = " << z << endl ; 
    }
};
class ProtectedDerived : protected Base
{
public :
    void display () {
        cout << "\n__________Protected Access Mode__________\n" ;
        cout << "\t\ty = " << y << endl ;
        cout << "\t\tz = " << z << endl ; 
    }
};
class PrivateDerived : private Base
{
// public :
//     void display () {
//         cout << "\n__________Private Access Mode__________\n" ;
//         cout << "\t\ty = " << y << endl ;
//         cout << "\t\tz = " << z << endl ; 
};
int main () {
    PublicDerived pd1 ;
    pd1.display () ;
    cout << "\t\t" <<pd1.z << endl ;

    ProtectedDerived pd2 ;
    //cout << pd2.z << endl ;

    PrivateDerived pd3 ;
    //cout << pd3.z << endl ;
    return 0;
}