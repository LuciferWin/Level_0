#include <iostream>
using namespace std ;
class Student
{
private :
    int rno ;
public :
    void enroll () {
        cout << "\nI have enrolled in C++ : " << endl ;
    }
    void pauTutionFee ( int fee) {
        cout << "I have to pay tution fee : " << fee << endl ;
    }
};
class Insturctor
{
private :
    int salary ;
public :
    void setSalary ( int salary ) {
        this->salary = salary ;
    }
    void getSalary () {
        cout << "I get Salary : " << salary << endl ;
    }
    void teach () {
        cout << "I have to teach a subject ." << endl ;
    }
};
class TeachingAssistant : public Student , public Insturctor
{
public :
    TeachingAssistant () {
        cout << "I am a Teaching Assistant ." ;
    }
};
int main () {
    TeachingAssistant ta1 ;
    ta1.enroll () ;
    ta1.setSalary ( 80000 ) ;
    ta1.getSalary () ;
    ta1.pauTutionFee ( 120000 ) ;
    ta1.teach () ;
    return 0;
}