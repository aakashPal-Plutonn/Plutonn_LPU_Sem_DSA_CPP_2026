// Binary Operator Overlaoding : a += b, a -= b, a *= b, a /= b, a %= b
#include<stdio.h>
#include<iostream>
using namespace std;

class complex{
    private:
        int real;
        int img;
    public:
        complex(){} // default construcotr
        complex(int r, int i){
            real = r;
            img = i;
        }
        void setData(int r, int i){
            real = r;
            img = i;
        }
        void getData(){
            cout << "real : " << real << " , img : " << img << endl;
        }


        void operator+=(int num){
            // real = real + num;
            img = img + num;
        }

        void operator*=(int num){
            real = real * num;
            img = img * num;
        }

        void operator+=(complex obj){
            real = real + obj.real;
            img = img + obj.real;
        }

};

int main(){
    complex c1;
    c1.setData(10, 5);
    c1.getData();
    
    // c1.operator+=(4);
    c1 += 4;
    c1.getData();
    
    c1 *= 2;
    c1.getData();
    
    
    complex c2;
    c2.setData(2, 3);
    c2 += c1;


    return 0;
}