#include <iostream>
using namespace std ;
int main () {
    
    int time ;

    cout << "Enter Current Time : " ;
    cin >> time ;

    string result = ( time < 10 ) ? "Good Morning!" : ( ( time < 20 ) ? 
                    "Good Day!" : "Good Evening" );

    cout << result << endl ;

    return 0;
}