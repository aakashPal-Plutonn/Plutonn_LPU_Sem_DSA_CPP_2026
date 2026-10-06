// Implement Queue using Array : Circular Queue

#include<stdio.h>
#include<iostream>
using namespace std;

#define max_size 5
int queue[max_size];
int front = -1;
int rear = -1;

// enqueue : 1
void enqueue(int val){
    if(((rear + 1) % max_size) == front){
        cout << "Queue overflow" << endl;
        return;
    }
    if(front == -1){
        front++;
    }
    rear = (rear + 1) % max_size;
    queue[rear] = val;
}
// dequeue : 2
void dequeue(){
    if(front == -1){
        cout << "Queue Underflow" << endl;
        return;
    }
    int deletedEle = queue[front];
    cout << "Deleted Element : " << deletedEle << endl;
    
    if(front == rear){
        front = -1;
        rear = -1;
        return;
    }
    
    front = (front + 1) % max_size;
}

// getFront : 3
void getFront(){
    if(front == -1){
        cout << "Queue Underflow" << endl;
        return;
    }
    cout << "Front Element : " << queue[front] << endl;
}

// getRear : 4
void getRear(){
    if(front == -1){
        cout << "Queue Underflow" << endl;
        return;
    }
    cout << "Rear Element : " << queue[rear] << endl;
}

// display : 5
void display(){
    if(front == -1){
        cout << "Queue Underflow" << endl;
        return;
    }
    cout << "Queue Elements :";
    for(int i = front; i != rear; i = (i + 1) % max_size){
        cout << queue[i] << " ";
        }
    cout << queue[rear] << " ";
    
    cout << endl;
}

int main(){
    int choice;
    int val;
    do{
        cout << "Enter your choice" << endl;
        cin >> choice;
        switch(choice){
            case 1:
                cout << "Enter a value" << endl;
                cin >> val;
                enqueue(val);
                display();
                break;
            case 2:
                dequeue();
                display();
                break;
            case 3:
                getFront();
                break;
            case 4:
                getRear();
                break;
            case 5:
                display();
                break;
            case 6:
                break;
            default:
                cout << "Invalid Choice" << endl;
        }

    }while(choice != 6);

    cout << "Program END" << endl;
    return 0;
}