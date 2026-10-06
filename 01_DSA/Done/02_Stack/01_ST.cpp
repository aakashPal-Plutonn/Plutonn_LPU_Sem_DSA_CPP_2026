//  Stack using Array

#include<iostream>
using namespace std;

#define max_size 5

int stack[max_size];
int top = -1;

// push -> 1
void push(int val){
    if(top == max_size-1){
        cout << "Stack is Full" << endl;
        return;
    }
    top++;
    stack[top] = val;
}

// pop -> 2
void pop(){
    if(top == -1){
        cout << "Stack is Empty iside pop" << endl;
        return;
    }
    cout << "Deleted Element: " << stack[top] << endl;
    top--;
}

// peek -> 3
void peek(){
    if(top == -1){
        cout << "Stack is Empty" << endl;
        return;
    }
    cout << "Top Element: " << stack[top] << endl;
}

// display -> 4
void display(){
    if(top == -1){
        cout << "Stack is Empty inside display" << endl;
        return;
    }
    cout << "Elemets in stack:" << endl;
    for(int i = top; i >= 0; i--){
        cout << stack[i] << endl;
    }
}

int main(){
    int choice;
    int val;
    do{
        cout << "Pls Enter a choice:" << endl;
        cin >> choice;
        switch(choice){
            case 1:
                // code
                cout << "Enter a value:" << endl;
                cin >> val;
                push(val);
                display();
                break;
                case 2:
                // code
                pop();
                display();
                break;
            case 3:
                // code
                peek();
                break;
            case 4:
                // code
                display();
                break;
            case 5:
                // code
                break;
                
            default:
                cout << "Invalid Choice" << endl;
                break;
        }
        
    }while(choice != 5);
    cout << "program ended" << endl;
    return 0;
}