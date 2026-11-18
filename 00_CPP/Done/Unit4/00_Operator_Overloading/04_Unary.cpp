// Unary Operator Overlaoding : as member Function

// PreIncreament : ++x
// PostIncreament : x++
// Predecrement : --x
// Postdecrement : x--
// unary minus : -x

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

        integer operator++(){
            integer temp;
            num = num +1; 
            temp.num = num;
            return temp;
        }
        // post
        integer operator++(int){
            integer temp;
            temp.num = num;
            num = num +1; 
            return temp;
        }
        integer operator-(){
            integer temp;
            temp.num = -num;
            return temp;
        }
};

int main(){
    integer i1, i2;
    i1.setData(10);
    i1.getData();


    // i2 = ++i1;
    // i2 = i1++;
    
    i2 = -i1;

    i2.getData();
    i1.getData();



    return 0;
}