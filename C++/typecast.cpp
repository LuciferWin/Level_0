#include <iostream>
using namespace std ;
int main () {
    
    //type casting ;
    //int float char string ;
    char x = '%' ;
    string z = "Hello" ;
    int y = 2 ;
    y = x ;// implicit char to int => char -> int ;
    cout << "y is : " << y << " Because of ASCII " << endl ;

    float h = y + 1.4 ;
    cout << "Float h is : " << (int)h << endl ;

    int a =  7 ;
    int b = 3 ;
    //float c = (float)a / b ;//explicit
    double c = 1.0 * a / b ;//implicit
    cout << "Float x is : " << c << endl ;


    return 0;
}