#include <iostream>
using namespace std ;
int main () {
    
    int row = 2 ;
    int col = 3 ;

    int number [row] [col] ;

    for ( int i = 0 ; i < row ; i ++ ) {

        for ( int j = 0 ; j < col ; j ++ ) {

            cout << "Enter Number : " ;
            cin >> number [i] [j] ;
            cout << endl ;

        }

    }

    cout << "-----Elements-----" << endl ;

    int total = 0 ;
    int count = 0 ;

    for ( int i = 0 ; i < row ; i ++ ) {

        for ( int j = 0 ; j < col ; j ++ ) {

            cout << number [i] [j] << "\t" ;
            total += number [i] [j] ;
            count ++ ;

        }

        cout << endl ;

    }

    float avg = (float) total / count ;

    cout << "Average : " << avg  << endl ;
    cout << "Total Number : " << count << endl ;
    cout << "Total Value : " << total << endl ;


//Sum of Columns 2D Arrays

    for ( int j = 0 ; j < col ; j ++ ) {

        int sum = 0 ;

        for ( int i = 0 ; i < row ; i ++ ) {

            sum += number [i] [j] ;

        }

    cout << "\nSum for col " << j + 1 << " : " << sum << endl ;

    }

//Calculating Max Value in 2D Array

    int max_num = number [0] [0] ;

    for ( int i = 0 ; i < row ; i ++ ) {

        int max_num_in_row = number [i] [0] ;

        for ( int j = 0 ; j < col ; j ++ ) {

            if ( max_num < number [i] [j] ) {

                max_num = number [i] [j] ;

            }

            if ( max_num_in_row < number [i] [j] ) {

                max_num_in_row = number [i] [j] ;

            }

        }

        cout <<"\nMax Number in Row : " << i << " is " << max_num_in_row << endl ;

    }

    cout << "Calculate Max Value in 2D Array" << endl ;
    cout << "Max Value is : " << max_num << endl ;

    return 0;
}