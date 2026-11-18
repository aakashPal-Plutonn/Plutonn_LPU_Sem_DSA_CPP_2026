// Types of Inheritance

// multivel Inheritance

#include <iostream>
using namespace std;

class Animal {
public:
    void eat() {
        cout << "Animal is eating.\n";
    }
};

class mammal : public Animal{
    public:
    void produceMilk(){
        cout << "mammals" << endl;
    }
};

class Dog : public mammal{
    public:
        void bark(){
            cout << "barking" << endl;
        }
};

int main() {
    Dog d;

    d.eat();
    d.produceMilk();
    d.bark();

    return 0;
}