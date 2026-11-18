// Recursion is a programming technique in which
// - a function calls itself **
// - to solve a smaller version of the same problem
// - until a specidied condition meet. **

#include<stdio.h>
#include<iostream>
using namespace std;

int count = 0;

void myFunc(){
    if(count == 5){
        return;
    }

    cout << ++count << endl;
    cout << "Hey i am called" << endl;
    myFunc();
}

int main(){

    cout << "Program Started" << endl;
    myFunc();

    return 0;
}

// => Base Condition
// => Back to the previous call
// => Recursion Tree