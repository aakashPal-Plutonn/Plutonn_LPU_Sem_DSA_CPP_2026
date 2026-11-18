// First Analys normal function call

#include<stdio.h>
#include<iostream>
using namespace std;

void func_A(){
    int a = 10;
    int b = 20;
    cout << "Hey, i am function A" << endl;
    cout << "func A => a = " << a << " : b = " << b << endl;
}

void func_B(){
    int a = 11;
    int b = 21;
    func_A();
    cout << "Hey, i am function B" << endl;
    cout << "func B => a = " << a << " : b = " << b << endl;
}

void func_C(){
    int a = 12;
    int b = 22;
    func_B();
    cout << "Hey, i am function C" << endl;
    cout << "func C => a = " << a << " : b = " << b << endl;
}


int main(){

    cout << "Program Started" << endl;
    func_C();

    return 0;
}