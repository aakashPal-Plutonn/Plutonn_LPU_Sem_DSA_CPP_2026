#include<stdio.h>
#include<iostream>
using namespace std;

#define max_size 5
int priorityQElements[max_size];
int priorityQueue[max_size];

int rear = -1;

void enque(int val, int priority){
    if(rear == max_size-1){
        cout << "PQueue is overflow" << endl;
        return;
    }
    
    rear++;
    priorityQElements[rear] = val;
    priorityQueue[rear] = priority;
}

int getHighestPriority(){
    int high_index = 0;
    for(int i = 0; i <= rear; i++){
        if(priorityQueue[i] > priorityQueue[high_index]){
            high_index = i;
        }
    }
    return high_index;
}

void dequeue(){
    if(rear == -1){
        cout << "PQueue is Underflow" << endl;
        return;
    }
    
    int index = getHighestPriority();
    for(int i = index; i < rear; i++){
        priorityQElements[i] = priorityQElements[i+1];
        priorityQueue[i] = priorityQueue[i+1];
    }
    rear--;
}

void display(){
    if(rear == -1){
        cout << "PQueue is Underflow" << endl;
        return;
    }
    cout << "Pqueue Elements : " << endl;
    for(int i = 0; i <= rear; i++){
        cout << "Element : " << priorityQElements[i] << " : Priority : " << priorityQueue[i] << endl;
    }
}


int main(){
    int choice;
    int val;
    int priority;

    do{
        cout << "Enyer your chocie" << endl;
        cin >> choice;
        switch(choice){
            case 1:
                cout << "enter value" << endl;
                cin >> val;
                cout << "enter priority" << endl;
                cin >> priority;
                enque(val, priority);
                display();
                break;
                
            case 2:
                dequeue();
                display();
                break;;

            case 3:
                display();
                break;

            case 4:
                break;

            default:
            cout << "Invalid Choice" << endl;
        }

    }while(choice != 4);

    return 0;
}