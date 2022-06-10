#include <iostream>
using namespace std ;
int findSmallestNumber () {
    int num1 , num2 , num3 ;
    cout << "Enter Any Number : " ;
    cin >> num1 >> num2 >> num3 ;
    cout << "The Minimum of " << num1 << " , " << num2 << " and " << num3 << " is : " ;

    int mini = num1 ;
    if ( num2 < mini ) {
        mini = num2 ;
    }
    if ( num3 < mini) {
        mini = num3 ;
    }

    return mini ;

}
int main () {
    cout << findSmallestNumber () ;
    return 0;
}