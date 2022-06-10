#include <iostream>
using namespace std ;
int main () {
    
    double loan, rate, months, monthlyInterest, totalInterest ;

    cout << "Enter loan amount : " ;
    cin >> loan ;

    cout << "Enter rate : " ;
    cin >> rate ;
    
    cout << "Enter number of months : " ;
    cin >> months ;

    monthlyInterest = loan * (rate * 0.01) ;
    totalInterest = monthlyInterest * months ;

    cout << "Monthly Interest : " << monthlyInterest << endl ;
    cout << "Your Total Interest is : " << totalInterest ;

    return 0;
}