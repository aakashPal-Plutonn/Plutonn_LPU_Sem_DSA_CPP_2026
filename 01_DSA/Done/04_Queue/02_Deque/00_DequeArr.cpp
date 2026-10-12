// implement Deque : using Curcular array

#include<stdio.h>
#include<iostream>
using namespace std;

#define max_size 5
int dequeArr[max_size];
int front = -1;
int rear = -1;

// insert at rear
void enqueueRear(int val){
    if((rear + 1) % max_size == front){
        cout << "Queue is Overflow" << endl;
        return;
    }
    if(front == -1){
        front = 0;
        rear = 0;
        dequeArr[rear] = val;
        return;
    }
    rear = (rear + 1) % max_size;
    dequeArr[rear] = val;
}

// insert at front
void enqueueFront(int val){
    if((rear + 1) % max_size == front){
        cout << "Queue is Overflow" << endl;
        return;
    }

    if(front == -1){
        front = 0;
        rear = 0;
        dequeArr[front] = val;
        return;
    }

    front = (front - 1 + max_size) % max_size;
    dequeArr[front] = val;
}

// delete from front
void dequeueFront(){
    if(front == -1){
        cout << "Queue Underflow" << endl;
        return;
    }
    int deleteEle = dequeArr[front];
    cout << "Deleted Element : " << deleteEle << endl;

    if(front == rear){
        front = -1;
        rear = -1;
        return;
    }
    front = (front + 1) % max_size;
}

// delete from end
void dequeueRear(){
    if(front == -1){
        cout << "Queue Underflow" << endl;
        return;
    }
    int deleteEle = dequeArr[rear];
    cout << "Deleted Element : " << deleteEle << endl;

    if(front == rear){
        front = -1;
        rear = -1;
        return;
    }

    rear = (rear - 1 + max_size) % max_size;
}

void getFront(){
    if(front == -1){
        cout << "Queue Underflow" << endl;
        return;
    }
    cout << "front Element : " << dequeArr[front] << endl;
}

void getRear(){
    if(front == -1){
        cout << "Queue Underflow" << endl;
        return;
    }
    cout << "rear Element : " << dequeArr[rear] << endl;
}

void display(){
    if(front == -1){
        cout << "Queue Underflow" << endl;
        return;
    }

    cout << "Deque elements : ";
    for(int i = front; i != rear; i = (i + 1) % max_size){
        cout << dequeArr[i] << " ";
    }
    cout << dequeArr[rear] << endl;
}

int main(){
    int choice;
    int val;
    do{
        cout << "Enter Choice" << endl;
        cin >> choice;
        switch(choice){
            case 1:
                cout << "Enter a value" << endl;
                cin >> val;
                enqueueRear(val);
                display();
                break;

            case 2:
                cout << "Enter a value" << endl;
                cin >> val;
                enqueueFront(val);
                display();
                break;
            
            case 3:
                dequeueFront();
                display();
                break;

            case 4:
                dequeueRear();
                display();
                break;

            case 5:
                getFront();
                break;

            case 6:
                getRear();
                break;

            case 7:
                display();
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