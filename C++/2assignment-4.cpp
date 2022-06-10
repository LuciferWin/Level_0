#include <iostream>
using namespace std ;
int main () {
    
    float pro, eng, math, max, min, total, average ;

    cout << "Enter Mark for Programming : " ;
    cin >> pro ;

    cout << "Enter Mark for English : " ;
    cin >> eng ;

    cout << "Enter Mark fot Math : " ;
    cin >> math ;

    if ( pro > eng && pro > math ) {
        cout << "Subject that got Maximum Mark is Programming !" << endl ;
    } else if ( eng > pro && eng > math ) {
        cout << "Subject that got Maximum Mark is English !" << endl ;
    } else if ( math > pro && math > eng ) {
            cout << "Subject that got Maximum Mark is Math !" << endl ;
    }

    if ( pro < eng && pro < math ) {
        cout << "Subject that got Minimum Mark is Programming !" << endl ;
    } else if ( eng < pro && eng < math ) {
        cout << "Subject that got Minimum Mark is English !" << endl ;
    } else if ( math < pro && math < eng ) {
            cout << "Subject that got Minimum Mark is Math !" << endl ;
    }

    total = pro + eng + math ;
    cout << "Total Mark is " << total << endl ;

    average = total / 3 ;
    cout << "Average Mark is " << average << endl ;

    if ( pro >= 50 && eng >= 50 && math >= 50 ) {
        cout << "Pass " ;
        if( pro >= 80 || eng >= 80 || math >= 80 ) {
            cout << " with " ;
            int i = 0;
            if ( pro >= 80 ) {
                i++ ;
                cout << "Programming " ;
            }
            if ( eng >= 80 ) {
                i++ ;
                cout << "English " ;
            }
            if ( math >= 80 ){
                i++ ;
                cout << "Math" ;
            }
            if ( i > 1 ){
                cout << " Distinctions !" << endl ;
            } else {
                cout << " Distionction !" << endl ;
            }
        }
    } else {
        cout << "Fail " << endl ;
    }

    return 0;
}