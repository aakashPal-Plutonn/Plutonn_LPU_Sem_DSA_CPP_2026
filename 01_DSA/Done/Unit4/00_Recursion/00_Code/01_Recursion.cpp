
// Recursion is a programming technique in which

// - a function calls itself **

// - to solve a smaller version of the same problem

// - until a specidied condition meet.



#include<stdio.h>
#include<iostream>
using namespace std;

int count = 0;

void myFunc(){
    cout << ++count << " ";
    cout << "hey, i am called" << endl;
    
    myFunc();
    
    cout << "hey, i am Done" << endl; // this line will never come in execution state.
}

int main(){

    cout << "Program Started" << endl;
    myFunc();

    return 0;
}

// => Stack Overflow