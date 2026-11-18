// Unary Operator Overlaoding : as friend function

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
        friend void showData(integer);
        friend integer operator-(const integer & obj);
        friend integer operator++(integer & obj);
        friend integer operator++(integer & obj, int);
};

void showData(integer obj){
    cout << " value : " << obj.num << endl;
}

// friend func
integer operator-(const integer & obj){
    integer temp;
    temp.num = -obj.num;
    return temp;
}   

integer operator++(integer & obj){
    integer temp;
    obj.num = obj.num + 1;
    temp.num = obj.num;
    return temp;
}   
integer operator++(integer & obj, int){
    integer temp;
    obj.num = obj.num + 1;
    temp.num = obj.num;
    return temp;
}   

int main(){
    integer i1, i2;
    i1.setData(10);
    // i1.getData();

    showData(i1);
    // i2 = operator-(i1);
    
    // i2 = -i1;
    
    i2 = ++i1;
    
    i2.getData();
    showData(i1);


    return 0;
}