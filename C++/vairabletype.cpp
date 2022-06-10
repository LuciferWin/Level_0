#include <iostream>
using namespace std ;
// Global Variable
int  a =  10 ;
const float PI = 3.14 ;
void display () {
    int a = 20 ;
    cout << "Value of  a inside function : " << a ;
    a = 50 ;
    cout << "Value of a inside function :  " << a;
}
int displayAnother (int a) {
    cout << "\nValue of a outside function : " << a;
}
void AreaOfCircle (int radius) {
    float area = PI * radius * radius ;
    cout << "\nArea is : " << area ;
}
int main () {
    display () ;
    cout << "\nValue of a outside functon : " << a ;
    displayAnother (30) ;  // 30 => a = 30
    AreaOfCircle (15) ;
}