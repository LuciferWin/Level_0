#include <iostream>
using namespace std ;
class Person
{
private :
    string name ;
public :
    void getData () {
        cout << "Enter Name : " ;
        getline ( cin , name ) ;
    }
    void display () {
        cout << "\tName : " << name << endl ;
    }

};
class Employee : public Person
{
private :
    string company ;
    int salary ;
public :
    void getData () {
        Person :: getData () ;
        cout << "Company Name : " ;
        getline ( cin , company ) ;
        cout << "Salary : " ;
        cin >> salary ;
        cin.ignore() ; //****************
    }
    void display () {
        Person :: display () ;
        cout << "\tCompany : " << company << endl ;
        cout << "\tSalary : " << salary << endl ;
    }
};
class Programmer : public Employee
{
private :
    string skillSet ;
public :   
    void getData () {
        Employee :: getData () ;
        cout << "Enter Skill Sets : " ;
        getline ( cin , skillSet ) ;
    }
    void display () {
        Employee :: display () ;
        cout << "\tSkill Sets : " << skillSet << endl ;
    }
};
int main () {
    Programmer programmer1 ;
    programmer1.getData () ;
    cout << "\n__________Programmer Information__________\n" ;
    programmer1.display () ;
    return 0 ;
}