#include <iostream>
using namespace std ;

int len = 5 ;
int salaries [5] = {5000,4500,6000,3200,4000};

int getMaxSalary () {

    int max_salary = salaries [0] ;

    for ( int i = 0 ; i < len ; i ++ ) {

        if ( max_salary < salaries [i] ) {

            max_salary = salaries [i] ;

        }

    }

    return max_salary ;

}

int getTotal () {

    int total = 0 ;

    for ( int i = 0 ; i < len ; i ++ ) {

        total += salaries [i] ;

    }

    return total ;

}

int main () {
    
    int max_salary = getMaxSalary () ;
    cout << "Maximum Salary is : " << max_salary << endl ;

    int total = getTotal () ;
    cout << "Total Salary is : " << total << endl ;

    return 0;
}