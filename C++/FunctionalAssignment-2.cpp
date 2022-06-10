#include <iostream>
using namespace std ;
float calculateDiscountItem () {
    float price , discountPercent , finalPrice ;
    cout << "Enter Price of Your Item : " ;
    cin >> price ;
    cout << "Enter Discount Percentage : " ;
    cin >> discountPercent ;
    cout << "After Discount , Price is : " ;

    finalPrice = price - ( ( discountPercent * 0.01 ) * price ) ;
    return finalPrice ;
}
void calculateInterest () {
    float loanAmount , interestRate , month , totalLoanAmount , monthlyInterest ;
    cout << "Enter Loan Amount : " ;
    cin >> loanAmount ;
    cout << "Enter Interest Rate : " ;
    cin >> interestRate ;
    cout << "Enter Total Month : " ;
    cin >> month ;
    monthlyInterest = ( interestRate * 0.01 ) * loanAmount + loanAmount ;
    cout << "Monthly Interset is : " << monthlyInterest << endl ;
    totalLoanAmount = monthlyInterest * month ;
    cout << "Total Loan Amount is " << totalLoanAmount ;
}
int main () {
    cout << calculateDiscountItem () ;
    cout << endl ;
    calculateInterest () ;
    return 0;
}