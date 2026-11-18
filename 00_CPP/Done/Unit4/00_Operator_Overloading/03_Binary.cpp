// Binary Operator Overlaoding : a == b, a != b, a < b, a > b, a <= b, a >= b

#include<stdio.h>
#include<iostream>
using namespace std;

class integer{
    int num;
    public:
        void setData(int i){
            num = i;
        }
        void getData(){
            cout << " value : " << num << endl;
        }

        bool operator==(const integer & obj){
            return num == obj.num;
        }
        bool operator!=(const integer & obj){
            return num != obj.num;
        }
};

int main(){
    integer i1, i2;
    i1.setData(10);
    i1.getData();

    i2.setData(10);
    i2.getData();

    cout << (i1 != i2);

    return 0;
}