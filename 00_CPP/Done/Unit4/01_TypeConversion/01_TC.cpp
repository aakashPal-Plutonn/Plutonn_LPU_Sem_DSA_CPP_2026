#include<stdio.h>
#include<iostream>
using namespace std;

class complex{
    int real;
    int img;
    public:
        complex(){}
        complex(int r, int i = 0){
            real = r;
            img = i;
        }
        // complex(int r){
        //     real = r;
        //     img = 0;
        // }
        void setData(int r, int i){
            real = r;
            img = i;
        }
        void getdata(){
            cout << real << " " << img << endl;
        }
} ;

class Integer{
    int i;
    public:
        Integer(){}

        Integer(int val){
            i = val;
        }
        void setData(int val){
            i = val;
        }
        void getData(){
            cout << i << endl;
        }
        operator int(){
            return i;
        }
        explicit operator int(){
            return i;
        }

};


int main(){
    Integer num1(99);

    int val = num1;
    int val = (int)num1;
    cout << val;

    // char ch = num1;

    return 0;
}