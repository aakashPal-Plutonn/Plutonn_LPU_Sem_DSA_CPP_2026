// Availablity and accessibility

#include<stdio.h>
#include<iostream>
using namespace std;

class A{
    private:
        int num1;
    protected:
        int num2;
    public:
        int num3;
        A(int p, int q, int r){
            num1 = p;
            num2 = q;
            num3 = r;
        }
        void getdata(){
            cout << "num1 : " << num1 << endl;
            cout << "num2 : " << num2 << endl;
            cout << "num3 : " << num3 << endl;
        }
};

int main(){
    A obj(10, 20, 30);
    obj.getdata();

    cout << obj.num3;
    // cout << obj.num2;
    // cout << obj.num1;

    return 0;
}