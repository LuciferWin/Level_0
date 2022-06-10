#include <iostream>
using namespace std ;
int rain = 0 , wind = 0 , temp = 0 ;
float avgRain = 0 , avgWind = 0 , avgTemp = 0 ;
int main () {
    int month ,count;
    int weather_info [month] [4] ;
    cout << "Enter Number of Months : " ;
    cin >> month ;
    for ( int j = 0 ; j < 5 ; j ++ ) {
        if ( j == 0 ) {
            for ( int i = 0 ; i < month ; i ++ ) {
                weather_info [0] [i] = i + 1 ;
            }
        } else if ( j == 1 ) {
            for ( int i = 0 ; i < month ; i ++ ) {
                cout << "Enter Month " << i + 1 << " Rain Info : " ;
                cin >> weather_info [j] [i] ;
            }
        } else if ( j == 2 ) {
            for ( int i = 0 ; i < month ; i ++ ) {
                cout << "Enter Month " << i + 1 << " Wind Info : " ;
                cin >> weather_info [j] [i] ;
            }
        } else if ( j == 3 ) {
            for ( int i = 0 ; i < month ; i ++ ) {
                cout << "Enter Month " << i + 1 << " Tempetrature Info : " ;
                cin >> weather_info [j] [i] ;
            }
        }
    }    
    cout << "\nWeather Information for : " << month << " Months " << endl ;
    cout << "Month\tRain\tWind\tTemp" << endl ;
    for ( int i = 0 ; i < month ; i ++ ) {
        for ( int j = 0 ; j < 5 ; j ++ ) {
            if ( j == 0 ) {  
                cout << weather_info [j] [i] << "\t" ; 
            } else if ( j == 1 ) {
                cout << weather_info [j] [i] << "\t" ;
            } else if ( j == 2 ) {
                cout << weather_info [j] [i] << "\t";
            } else if ( j == 3 ) {
                cout << weather_info [j] [i] << "\t" ;
            }
        }
        cout << endl ;
    }
    
    for ( int i =0 ; i < month ; i ++ ) {
        rain += weather_info [1][i] ;
        wind += weather_info [2][i] ;
        temp += weather_info [3][i] ;
    }

    cout << "Total\t" ;
    cout << rain << "\t" ;
    cout << wind << "\t" ;
    cout << temp << "\t" ;
    cout << endl ;

    avgRain = (float) rain / month ;
    avgWind = (float) wind / month ;
    avgTemp = (float) temp / month ;
    cout << "Avg\t" ;
    cout << avgRain << "\t" ;
    cout << avgWind << "\t" ;
    cout << avgTemp << "\t" ;
        
    
    return 0;
}