#include <iostream>
using namespace std ;
int main () {
    
    const float COE = 703 ;
    float weight, height;

    cout << "Enter Your Weight in lb : " << endl ;
    cin >> weight ;

    cout << "Enter Your Height in Inches : " << endl ;
    cin >> height ;

    float bmi = ( weight / ( height * height ) ) * 703 ;
    cout << "Your BMI is : " << bmi << endl ;

    //<18.5
    //18.5 < 24.9
    //25 < 29.9
    //>=30

    if ( bmi < 18.5 ) {
        cout << "Under Weight!" ;
    } else if ( bmi >= 18.5 && bmi <= 24.9 ) {
        cout << "Normal Weight!" ;
    }else if ( bmi >= 25 && bmi <= 29.9 ) {
        cout << "Over Weight!" ;
    }else {
        cout << "Obisity!" ;
    }

    return 0;
}