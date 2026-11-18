// Inheritance is a core concept of Object-Oriented Programming (OOP) that

    // allows a new class (known as the derived or child class) to acquire the attributes/data members and methods of an existing class (known as the base or parent class).

    // It models an "is-a" relationship (e.g., a Dog is an Animal) and primarily serves to promote code reusability.

#include <iostream>
using namespace std;

// Base Class (Parent)
class Animal {
    public:
        void eat(){
            cout << "eating" << endl;
        }
        void walk(){
            cout << "walking" << endl;
        }
    
};

// Derived Class (Child)
class Dog : public Animal {
    public:
        void bark(){
            cout << "barking" << endl;
            
        }
    
};


class cat : public Animal{
    void meow(){
        cout << "meOW" << endl;
    }
};

int main() {



    Dog myDog;


    myDog.eat();  // Inherited method
    myDog.bark(); // Derived method


    return 0;
}