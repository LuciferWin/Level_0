#include <iostream>
using namespace std ;
class Animal
{
protected : 
    string name ;
    int leg ;
public : 
    void setName ( string name ) {
        this->name = name ;
    }
    void setLeg ( int leg ) {
        this->leg = leg ;
    }
    string getName () {
        return this->name ;
    }
    int getLeg () {
        return this->leg ;
    }
    void eat () {
        cout << "\nI can eat !" ;
    }
    void sleep () {
        cout << "\nI can sleep !" << endl << endl ;
    }
};
class Bird : public Animal
{
private :
    int wing ;
public :
    void setWing ( int wing ) {
        this->wing = wing ;
    }
    int getWing () {
        return this->wing ;
    }
    void initData ( string name , int leg , int wing ) {
        this->wing = wing ;
        this->name = name ;
        this->leg = leg ;
    }
    void fly () {
        cout << "\nI can Fly !" << endl ;
    }
};
class Elephant : public Animal
{
private :
    int tail ;
public :
    void setTail ( int tail ) {
        this->tail = tail ;
    }
    int getTail () {
        return this->tail ;
    }
    void swim () {
        cout << "\nI can swim !" << endl ;
    }
    void showInfo () {
        cout << "\n\n__________Elephant Info__________\n\n" ;
        cout << "Name : \t\t" << getName () << endl ;
        cout << "No of Legs : \t" << Animal::getLeg () << endl ;
        cout << "No of Tails : \t" << tail << endl ;
    }
};
int main () {
    Bird bird1 ;
    bird1.setName ("ShewGae") ;
    bird1.setLeg (2) ;
    bird1.setWing (2) ;
    cout << bird1.getName () << " has " << bird1.getLeg () << " Legs ." ;
    bird1.eat () ;
    bird1.sleep () ;
    bird1.fly () ;
    Bird bird2 ;
    bird2.initData ( "NgweGae" , 2 , 2 ) ;
    cout << bird2.getName () << " has " << bird2.getLeg () << " legs and " << bird2.getWing () << " wings ." << endl ;
    Elephant elephant1 ;
    elephant1.setName ("Fatee") ;
    elephant1.setLeg (4) ;
    cout << elephant1.getName () << " has " << elephant1.getLeg () << " Legs ." ;
    elephant1.eat () ;
    elephant1.sleep () ;
    elephant1.setTail (1) ;
    elephant1.showInfo () ;
    return 0;
}