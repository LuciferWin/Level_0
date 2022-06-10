#include <iostream>
using namespace std ;
int main () {
    
    char grade ;

    cout << "Enter Your Grade ( A - E  ) : " ;
    cin >> grade ;

    switch (grade)
    {
    case 'A':
        cout << endl << "Excellent !" ;
        break;
    case 'B':
        cout << endl << "Credit !" ;
        break;
    case 'C':
        cout << endl << "Welldone !" ;
        break;
    case 'D':
        cout << endl << "You Passed !" ;
        break;
    case 'E':
        cout << endl << "Better Try Again !" ;
        break;
    default:
        cout << endl << "iNVALID Grade !" ;
        break;
    }

    cout << endl << "Your Grade is " << grade << "." << endl ;

    return 0;
}