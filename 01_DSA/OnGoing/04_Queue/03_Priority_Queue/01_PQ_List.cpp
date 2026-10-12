// implement PQ : using List

#include <iostream>
using namespace std;

struct Node {
    int data;
    int priority;
    Node* next;

    Node(int val, int p) {
        data = val;
        priority = p;
        next = NULL;
    }
};

// INSERT according to priority
// Smaller priority number = higher priority
// Time Complexity: O(n)
void enqueue(Node*& front, int val, int priority) {

    Node* newNode = new Node(val, priority);

    // Case 1: Queue is empty
    // OR new node has higher priority than front
    if (front == NULL || priority < front->priority) {
        newNode->next = front;
        front = newNode;
        return;
    }

    // Find correct position
    Node* temp = front;

    while (temp->next != NULL && temp->next->priority <= priority) {
        temp = temp->next;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}


// DELETE highest priority element
// Highest priority element is always at front
// Time Complexity: O(1)
void dequeue(Node*& front) {

    if (front == NULL) {
        cout << "queue underflow" << endl;
        return;
    }

    Node* temp = front;

    cout << "Dequeued Element : " << temp->data << " Priority : " << temp->priority << endl;

    front = front->next;

    delete temp;
}


// DISPLAY QUEUE
// Time Complexity: O(n)
void display(Node* front) {

    if (front == NULL) {
        cout << "queue underflow" << endl;
        return;
    }

    cout << "\nQueue Elements : " << endl;

    Node* temp = front;

    while (temp != NULL) {
        cout << "Element : " << temp->data << " Priority : " << temp->priority << endl;

        temp = temp->next;
    }
}


// GET HIGHEST PRIORITY ELEMENT
// Time Complexity: O(1)
void getHighpriorityElement(Node* front) {

    if (front == NULL) {
        cout << "queue underflow" << endl;
        return;
    }

    cout << "Element with highest priority : " << front->data << endl;

    cout << "Priority : " << front->priority << endl;
}


int main() {

    int choice;
    int val;
    int priority;

    Node* front = NULL;

    do {
        cout << "Enter Choice : ";
        cin >> choice;

        switch (choice) {

            case 1:
                cout << "Enter a value : ";
                cin >> val;

                cout << "Enter priority : ";
                cin >> priority;

                enqueue(front, val, priority);
                break;

            case 2:
                dequeue(front);
                break;

            case 3:
                display(front);
                break;

            case 4:
                getHighpriorityElement(front);
                break;

            case 5:
                break;

            default:
                cout << "Invalid Choice" << endl;
        }

    } while (choice != 5);

    cout << "\nProgram ended" << endl;

    return 0;
}
