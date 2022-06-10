#include <iostream>
using namespace std ;
class Employee 
{
private :
    string name ;
    int salary ;
public :
    Employee () {

    }
    Employee ( string name , int salary ) {
        this->name = name ;
        this->salary = salary ;
    }
    int getSalary () {
        return this->salary = salary ;
    }
    void displayInfo () {
        cout << "Name : " << name << "\tSalary : " << salary << endl ;
    }
    void salaryIncrease ( int amount ) {
        this->salary += amount ;
    }
};
int main () {
    Employee emp [4] ;
    string name ;
    int salary ;
    int total ;
    for ( int i = 0 ; i < 4 ; i ++ ) {
        cout << "Enter Employee " << i + 1 << " Information : " << endl ;
        cout << "Enter Name : " ;
        getline ( cin , name ) ;
        cout << "Enter Salary : " ;
        cin >> salary ;
        cin.ignore () ;
        emp [ i ] = Employee ( name , salary ) ;
    }
    cout << "\n__________Employee Information List__________\n" ;
    for ( int i = 0 ; i < 4 ; i ++ ) {
        emp [ i ] .displayInfo () ;
    }
    for ( int i = 0 ; i < 4 ; i ++ ) {
        emp [ i ] .salaryIncrease ( 30000 ) ;
        
    }
    cout << "\n__________After Employee Salary Increase__________\n" ;
    for ( int i = 0 ; i < 4 ; i ++ ) {
        emp [ i ] .displayInfo () ;
    }
    
    return 0;
}