// Implement Queue using List: using struct

#include<stdio.h>
#include<iostream>
using namespace std;

struct queueNode{
    int data;
    queueNode * next;
    queueNode(int val){
        data = val;
        next = nullptr;
    }
};

void enqueue(queueNode *& front, queueNode *& rear, int val){
    queueNode * newNode = new queueNode(val);

    if(front == nullptr && rear == nullptr){
        front = newNode;
        rear = newNode;
        return;
    }
    rear->next = newNode;
    rear = newNode;
}

void dequeue(queueNode *& front, queueNode *& rear){
    if(front == nullptr && rear == nullptr){
        cout << "Queue Underflow" << endl;
        return;
    }
    queueNode * deleteNode = front;
    
    front = front->next;
    if(front == nullptr){
        rear = nullptr;
    }
    delete deleteNode;    
}

void display(queueNode * front, queueNode * rear){
    if(front == nullptr && rear == nullptr){
        cout << "Queue Underflow" << endl;
        return;
    }
    queueNode * curNode = front;
    cout << "elements in queue : ";
    while(curNode != nullptr){
        cout << curNode->data << " ";
        curNode = curNode->next;
    }
    cout << endl;
}

void getFront(queueNode * front){
    if(front == nullptr){
        cout << "Queue Underflow" << endl;
        return;
    }
    cout << "front data: " << front->data << endl;
}

void getRear(queueNode * rear){
    if(rear == nullptr){
        cout << "Queue Underflow" << endl;
        return;
    }
    cout << "rear data: " << rear->data << endl;
}

int main(){
    queueNode * front = nullptr;
    queueNode * rear = nullptr;

    int choice;
    int val;
    do{
        cout << "enter your choice" << endl;
        cin >> choice;
        switch (choice){
            case 1:
                cout << "enter a value" << endl;
                cin >> val;
                enqueue(front, rear, val);
                display(front, rear);
                break;

            case 2:
                dequeue(front, rear);
                display(front, rear);
                break;

            case 3:
                getFront(front);
                break;
            case 4:
                getRear(rear);
                break;

            case 5:
                display(front, rear);
                break;
            
            case 6:
                break;
            default:
                cout << "invalid choice" << endl;
                break;
        }
    
    } while (choice != 6);
    
    cout << "program ended" << endl;
    return 0;
}