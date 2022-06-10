#include <iostream>
using namespace std ;
class Person
{
protected :
    string name ;
    string nrc ;
    void eat () {

    }
public :
    void initData ( string name , string nrc ) {
        this->name = name ;
        this->nrc = nrc ;
    }
    void showData () {
        cout << "\nName : " << name << endl ;
        cout << "NRC : " << nrc << endl ;
    }
};
class Student : public Person
{
private :
    int rno ;
public :
    Student () {

    }
    Student ( int rno , string name , string nrc ) {
        this->rno = rno ;
        initData ( name , nrc ) ;
    }
    void showData () {
        Person :: showData () ;
        cout << "Roll Number : " << rno << endl ;
    }
    void attend () {
        cout << "Hello I am attending Z2P Level 4 ." << endl ; 
    }
};
class Programmer : public Person
{
private :
    string skillSet ;
public :
    void setSkillSet ( string skills ) {
        this->skillSet = skills ;
    }
    void viewSkillSet () {
        cout << "Hello , I am a programmer an my skill is : " << skillSet << endl ;
    }
};
int main () {
    Student student1 ;
    student1.initData ( "Lucifer" , "9/NaHtaKa(N)190739" ) ;
    student1.showData () ;
    student1.attend () ;
    Student student2 ( 1 , "Alex" , "10/TaKaTa(N)145216" ) ;
    student2.showData () ;
    student2.attend () ;
    Programmer programmer1 ;
    programmer1.initData ( "Sanny" , "8/BaTaHta(N)452136" ) ;
    programmer1.showData () ;
    programmer1.setSkillSet ( "C++" ) ;
    programmer1.viewSkillSet () ;
    return 0;
}