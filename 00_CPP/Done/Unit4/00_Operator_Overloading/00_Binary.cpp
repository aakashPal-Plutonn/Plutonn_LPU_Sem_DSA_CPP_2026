// Binary Operator Overlaoding : assignment : (=)

#include<stdio.h>
#include<iostream>
using namespace std;

class complex{
    private:
        int real;
        int img;
    public:
        complex(int r, int i){
            real = r;
            img = i;
        }
};

int main(){
    complex c1(10, 20);
    complex c2 = c1;


    return 0;
}