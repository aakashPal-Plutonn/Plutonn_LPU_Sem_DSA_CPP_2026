// inheritance using Modes

#include<stdio.h>
#include<iostream>
using namespace std;

class Array{
    private:
        int arr[5];
    public:
        void insert(int val, int ind){
            arr[ind] = val;
        }
};

class Stack : protected Array{
    int top = -1;
    public:
        void push(int val){
            top = top+1;
            insert(val, top);
        }
};

class Queue : protected Array{
    int front = -1;
    int rear = -1;
    public:
        void push(){
            
        }
};

int main(){
    Array obj; 

    Queue obj2;

    // obj2.insert(10, 4);


    Stack st;
    st.push(45);

    // st.insert(78, 5);


    return 0;
}