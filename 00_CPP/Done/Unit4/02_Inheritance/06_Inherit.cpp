// Access Modifires

// Private members of parent class
    // can not be accessed in child class either in it's member functions
    // or using object/DOT(.) operator

#include<stdio.h>
#include<iostream>
using namespace std;

class A{
    private:
        int a;
    protected:
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
    objB.setData(1, 2, 3, 4);
    objB.getData();


    return 0;
}