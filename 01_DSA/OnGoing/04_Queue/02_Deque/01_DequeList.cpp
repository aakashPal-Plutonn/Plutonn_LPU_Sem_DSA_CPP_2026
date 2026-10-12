// implement Deque : using Doubley Linked List : using struct

#include<stdio.h>
#include<iostream>
using namespace std;

struct dequeNode{
    int data;
    dequeNode * next;
    dequeNode * prev;
    dequeNode(int val){
        data = val;
        next = nullptr;
        prev = nullptr;
    }
};

// insert at rear
void enqueueRear(dequeNode *& front, dequeNode *& rear, int val){
    dequeNode * newNode = new dequeNode(val);

    if(front == nullptr && rear == nullptr){
        front = newNode;
        rear = newNode;
        return;
    }

    newNode->prev = rear;
    rear->next = newNode;
    rear = newNode;
}

// insert at front
void enqueueFront(dequeNode *& front, dequeNode *& rear, int val){
    dequeNode * newNode = new dequeNode(val);

    if(front == nullptr && rear == nullptr){
        front = newNode;
        rear = newNode;
        return;
    }

    newNode->next = front;
    front->prev = newNode;
    front = newNode;
}

// delete at front
void dequeueFront(dequeNode *& front, dequeNode *& rear){
    if(front == nullptr && rear == nullptr){
        cout << "Deque Underflow" << endl;
        return;
    }
    dequeNode * deleteNode = front;
    
    front = front->next;
    if(front == nullptr){
        rear = nullptr;
    } else {
        front->prev = nullptr;
    }
    deleteNode->next = nullptr;
    delete deleteNode;
}

// delete at rear
void dequeueRear(dequeNode *& front, dequeNode *& rear){
    if(front == nullptr && rear == nullptr){
        cout << "Deque Underflow" << endl;
        return;
    }
    dequeNode * deleteNode = rear;

    rear = rear->prev;

    if(rear == nullptr){
        front = nullptr;
    } else {
        rear->next = nullptr;
    }
    deleteNode->prev = nullptr;
    delete deleteNode;
}

void getFront(dequeNode * front, dequeNode * rear){
    if(front == nullptr && rear == nullptr){
        cout << "Deque Underflow" << endl;
        return;
    }
    cout << "front element : " << front->data << endl;
}

void getRear(dequeNode * front, dequeNode * rear){
    if(front == nullptr && rear == nullptr){
        cout << "Deque Underflow" << endl;
        return;
    }
    cout << "rear element : " << rear->data << endl;
}

void display(dequeNode * front, dequeNode * rear){
    if(front == nullptr && rear == nullptr){
        cout << "Deque Underflow" << endl;
        return;
    }
    dequeNode * curNode = front;
    cout << "Deque Elements : ";
    while(curNode != nullptr){
        cout << curNode->data << " ";
        curNode = curNode->next;
    }
    cout << endl;
}

int main(){
    int choice;
    int val;

    dequeNode * front = nullptr;
    dequeNode * rear = nullptr;

    do{
        cout << "Enter Choice" << endl;
        cin >> choice;
        switch(choice){
            case 1:
                cout << "Enter a val" << endl;
                cin >> val;
                enqueueRear(front, rear, val);
                display(front, rear);
                break;

            case 2:
                cout << "Enter a val" << endl;
                cin >> val;
                enqueueFront(front, rear, val);
                display(front, rear);
                break;
            
            case 3:
                dequeueFront(front, rear);
                display(front, rear);
                break;

            case 4:
                dequeueRear(front, rear);
                display(front, rear);
                break;

            case 5:
                getFront(front, rear);
                break;

            case 6:
                getRear(front, rear);
                break;

            case 7:
                display(front, rear);
                break;

            case 8:
                break;

            default:
                cout << "Invalid Choice" << endl;
        }
            
    }while(choice != 8);
        
    cout << "program ended" << endl;

    return 0;
}