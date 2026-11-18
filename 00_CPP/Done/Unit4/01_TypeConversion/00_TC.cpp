#include<stdio.h>
#include<iostream>
using namespace std;

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
};

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

int main(){
    int num  = 10;
    char ch = 'A';
    Integer var;
    var = ch;
    var.getData();

    complex c1;

    c1 = num;

    c1.getdata();


    return 0;
}