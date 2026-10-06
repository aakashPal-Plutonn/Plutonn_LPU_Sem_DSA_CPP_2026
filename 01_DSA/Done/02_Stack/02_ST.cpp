//  Stack using List
#include<iostream>
using namespace std;

class stackNode{
    public:
    int data;
    stackNode * next;
    stackNode(int val){
        data = val;
        next = nullptr;
    }
};

void push(stackNode *& top, int val){
    stackNode * newNode = new stackNode(val);
    
    newNode->next = top;
    top = newNode;
    cout << top->data << " is pushed onto the stack" << endl;
}

void pop(stackNode *& top){
    if(top == nullptr){
        cout << "Stack Underflow" << endl;
        return;
    }
    stackNode * deleteNode = top;
    top = top->next;
    deleteNode->next = nullptr;
    cout << deleteNode->data << " is popped from the stack" << endl;
    delete deleteNode;
}


void display(stackNode *& top){
    if(top == nullptr){
        cout << "Stack is empty" << endl;
        return;
    }
    stackNode * curNode = top;
    cout << "Elements in the stack: ";
    while(curNode != nullptr){
        cout << curNode->data << " ";
        curNode = curNode->next;
    }
    cout << endl;
}

int main(){
    int choice;
    int val;
    
    stackNode * top = nullptr;

    do{
        // cout << "Enter you choice." << endl;
        cin >> choice;
        switch(choice){
            case 1:
                // cout << "Pls Enter a value." << endl;
                cin >> val;
                push(top, val);
                break;
            case 2:
                pop(top);
                break;
            case 3:
                display(top);
                break;
            case 4:
                break;
            default:
                cout << "Invalid choice" << endl;
                break;
        }
        
    }while(choice != 4); 

    cout << "Exiting the program" << endl;
    return 0;
} 