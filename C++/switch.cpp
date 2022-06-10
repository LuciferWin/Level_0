#include <iostream>
using namespace std ;
int main () {
    
    int dow ;

    cout << "Enter Number of Week's Day ( 1 - 7  ) : " ;
    cin >> dow ;

    switch (dow)
    {
    case 1:
        cout << endl << "Sunday !" ;
        break;
    case 2:
        cout << endl << "Monday !" ;
        break;
    case 3:
        cout << endl << "Tuesday !" ;
        break;
    case 4:
        cout << endl << "Wednesday !" ;
        break;
    case 5:
        cout << endl << "Thursday !" ;
        break;
    case 6:
        cout << endl << "Friday !" ;
        break;
    case 7:
        cout << endl << "Saturday !" ;
        break;
    default:
        cout << endl << "Wrong Number of Day !" ;
        break;
    }

    return 0;
}