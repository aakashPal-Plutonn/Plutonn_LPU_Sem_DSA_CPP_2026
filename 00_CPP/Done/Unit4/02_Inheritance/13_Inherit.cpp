// Hierarchical inheritance

#include <iostream>
using namespace std;

class Animal {
public:
    void eat() {
        cout << "Animal is eating.\n";
    }
};

int main() {
    Dog d;
    Cat c;

    d.eat();
    d.bark();

    c.eat();
    c.meow();

    return 0;
}