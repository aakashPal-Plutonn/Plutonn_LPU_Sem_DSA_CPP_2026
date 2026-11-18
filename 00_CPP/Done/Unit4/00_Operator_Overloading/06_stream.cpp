// Operator Overlaoding : stream operators << , >>
#include<stdio.h>
#include<iostream>
using namespace std;

class complex{
    private:
        int real;
        int img;
    public:
        void setdata(int r, int i){
            real = r;
            img = i;
        }
        void getData(){
            cout << real << " " << img << endl;
        }
        friend ostream& operator<<(ostream & out, const complex & obj);
};

ostream& operator<<(ostream & out, const complex & obj){
    out << obj.real << " " << obj.img << endl;
    return out;
}


int main(){
    complex c1;
    c1.setdata(18, 14);

    cout << c1;


    return 0;
}