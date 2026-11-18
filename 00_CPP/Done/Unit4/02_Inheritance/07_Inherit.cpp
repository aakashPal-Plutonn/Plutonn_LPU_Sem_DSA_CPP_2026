// Private members of parent class
    // can not be accessed in child class either in it's member functions
    // or using object/DOT(.) operator

// While protected members of parent class
    // can be accessed in child class in it's member functions
    // but still can not be accessed using object/DOT(.) operator - objB.a

// While Public members of parent class
    // can be accessed in child class in it's member functions
    // and also can be accessed using object/DOT(.) operator - objB.a

#include<stdio.h>
#include<iostream>
using namespace std;

class A{
    protected:
        int a;
        int b;
    public:
        void setData(int x, int y){
            a = x;
            b = y;
        }
        void getData(){
            cout << "a : " << a << ", b : " << b << endl;
        }
};

class B : public A{
    void getdata(){
        cout << a;
        cout << b;
    }
};

int main(){
    A objA;
    objA.setData(10, 20);
    objA.getData();
    
    B objB;
    // objB.setData(1, 2, 3, 4);
    // objB.getData();

    cout << objB.b;

    // objB.a;
    // objB.b;
    // // objB.c;
    // // objB.d;

    return 0;
}