#include <iostream>
using namespace std ;
class Song
{
private:
    string title ;
    string album ;
    string singer ;

public:
    Song () {
        this->title = "Unknown Title" ;
        this->album = "Unknown Album" ;
        this->singer = "Unknown Singer" ;
    }
    void setTitle ( string title ) {
        this->title = title ;
    }
    string getTitle () {
        return this->title ;
    }
    void setAlbum ( string album ) {
        this->album = album ;
    }
    string getAlbum () {
        return this->album ;
    }
    void setSinger ( string singer ) {
        this->singer = singer ;
    }
    string getSinger () {
        return this->singer ;
    }
    void showData () {
        cout << "\n" ;
        cout << getTitle () << "\t\t" ;
        cout << getAlbum () << "\t\t" ;
        cout << getSinger () << "\n" ;
    }
};
int main () {
    Song songs [3] ;
    string title , album , singer ;

    for ( int i = 0 ; i < 3 ; i ++ ) {
        cout << "Enter Song Tittle : " ;
        getline ( cin , title ) ;
        cout << "Enter Song Album : " ;
        getline ( cin , album ) ;
        cout << "Enter Song Singer : " ;
        getline ( cin , singer ) ;
        songs [i].setTitle ( title ) ;
        songs [i].setAlbum ( album ) ;
        songs [i].setSinger ( singer ) ;
    }
    cout << "__________Songs Info__________" << endl ;
    cout << "Title\t\tAlbum\t\tSinger\n" ;
    for ( int i = 0 ; i < 3 ; i ++ ) {
        songs [i].showData () ;
    }
    return 0;
}