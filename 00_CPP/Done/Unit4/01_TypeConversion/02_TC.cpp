#include<stdio.h>
#include<iostream>
using namespace std;

class class_A{
    int a;
    int b;
    public:
        class_A(){}
        class_A(int x, int y){
            a = x;
            b = y;
        }
        void getdata(){
            cout << "a : " << a << " , b : " << b << endl;
        }
        int get_a(){
            return a;
        }
        int get_b(){
            return b;
        }
};
    
class class_B{
    int m;
    int n;
    public:
        class_B(){}
        class_B(int x, int y){
            m = x;
            n = y;
        }
        
        class_B(class_A obj){
            m = obj.get_a();
            n = obj.get_b();
        }
        
        void getdata(){
            cout << "m : " << m << " , n : " << n << endl;
        }

        
};


int main(){
    class_A obj_a(10, 5);
    class_B obj_b;

    obj_b = obj_a;

    obj_b.getdata();
    return 0;
}