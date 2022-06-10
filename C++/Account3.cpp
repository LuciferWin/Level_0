#include <iostream>
using namespace std ;
class Account 
{
public:
    string accountHolder ;
    string accountNumber ;
    int accountBalance = 0 ;

    void createAccount ( string accountHolder , string accountNumber ) {
        this->accountHolder = accountHolder ;
        this->accountNumber = accountNumber ;
        accountBalance = 1000 ;
    }

    void deposit ( int depositAmount ) {
        accountBalance = accountBalance + depositAmount ;
    }

    bool withdraw ( int withdrawAmmount ) {
        if ( withdrawAmmount > accountBalance ) {
            return false ;
        } else {
            accountBalance = accountBalance - withdrawAmmount ;
            return true ;
        }
    }

    void showData () {
        cout << "_____Current Info_____" << endl ;
        cout << "Account Holder Name : " << accountHolder << endl ;
        cout << "Account Number : " << accountNumber << endl ;
        cout << "Account Balance : " << accountBalance << endl ;
    }
};
int main () {
    Account account1 ;
    account1.showData () ;

    account1.createAccount ( "Denny" , "denny567" ) ;
    account1.showData () ;
    account1.deposit ( 20000 ) ;
    cout << "_____After Deposit_____"  << endl ;
    cout << "Balance is : " << account1.accountBalance << endl ;
    bool result = account1.withdraw( 5000 ) ;
    if ( result ) {
        account1.showData () ;
    } else {
        cout << "Error to Withdraw !" << endl ;
    }
    return 0;
}