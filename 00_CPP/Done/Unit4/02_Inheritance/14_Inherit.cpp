#include<stdio.h>
#include<iostream>
using namespace std;

class Animal{
    public:
    void sound(){
        cout << "Amimal sound" << endl;
    }
};

class Dog : public Animal{
    public:
        void smell(){
            cout << "Dog smell" << endl;
        }
        void sound(){
            cout << "Dog bark" << endl;
        }
    };
    
class Cat : public Animal{
    public:
        void jump(){
            cout << "Cat Jump" << endl;
        }
        void sound(){
            cout << "cat Meow" << endl;
        }
};

int main(){
    Dog d;
    Cat c;

    d.sound();
    
    c.sound();

    // Animal * obj = new Dog();

    // obj->sound();


    return 0;
}