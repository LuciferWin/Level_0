#include <iostream>
using namespace std ;
class Student
{
private :
    int rno ;
    string name ;
    string course ;
public :
    Student () {
        this->rno = 0 ;
        this->name = "Unknown" ;
        this->course = "Unknown" ;
    }
    void setRno ( int rno ) {
        this->rno = rno ;
    }
    int getRno () {
        return this->rno ;
    }
    void setName ( string name ) {
        this->name = name ;
    }
    string getName () {
        return this->name ;
    }
    void setCourse ( string course ) {
        this->course = course ;
    }
    string getCourse () {
        return this->course ;
    }
    void showData () {
        cout << "\n" << getRno () << "\t\t" << getName () << "\t\t" << getCourse () << "\t\t" << endl ;
    }
    
};
Student students [5] ;
int rno ;
string name , course ;
void search () {
        int key ;
        cout << "Enter Roll Number To Search : " ;
        cin >> key ;
        for ( int i = 0 ; i < 5 ; i ++ ) {
            if ( key == students[i].getRno() ) {
                cout << "RollNumber\tName\t\tCourse\n" ;
                cout << students[i].getRno () << "\t\t" << students[i].getName () << "\t\t" << students[i].getCourse () ;
            }
        }
}
int main () {
    for ( int i  = 0 ; i < 5 ; i ++ ) {
        cout << "Enter Student " << i + 1 << " Information !" << endl ;
        cout << "Enter Roll Number : " ;
        cin >> rno ;
        cin.ignore () ;
        cout << "Enter Name : " ;
        getline ( cin , name ) ;
        cout << "Enter Course : " ;
        getline ( cin , course ) ;
        students [ i ].setRno ( rno ) ;
        students [ i ].setName ( name ) ;
        students [ i ].setCourse ( course ) ;
    }
    cout << "\n__________Student Informaton__________\n" ;
    cout << "RollNumber\tName\t\tCourse\n" ;
    for ( int i = 0 ; i < 5 ; i ++ ) {
        students[i].showData () ;
    }
    search () ;
    return 0;
}
