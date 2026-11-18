// Binary Operator Overlaoding : a+b, a-b, a*b, a/b, a%b

#include<stdio.h>
#include<iostream>
using namespace std;

class complex{
    private:
        int real;
        int img;
    public:
        complex(){
        }

        complex(int r, int i){
            real = r;
            img = i;
        }
        void setData(int r, int i){
            real = r;
            img = i;
        }
        void getData(){
            cout << real << " " << img << endl;
        }
        complex add(complex obj){
            complex temp;
            temp.real = real + obj.real;
            temp.img = img + obj.img;
            return temp;
        }

        complex operator+(const complex obj){
            complex temp;
            temp.real = real + obj.real;
            temp.img = img + obj.img;
            return temp;
        }

        complex operator-(complex & obj){
            complex temp;
            temp.real = real - obj.real;
            temp.img = img - obj.img;
            return temp;
        }
};

int main(){
    complex c1, c2, c3;
    c1.setData(10, 20);
    c2.setData(5, 2);

    c1.getData();
    c2.getData();

    // c3 = c1.add(c2);
    c3 = c1 + c2;
    c3.getData();


    c3 = c1 - c2;
    c3 = c2 - c1;
    c3.getData();



    return 0;
}