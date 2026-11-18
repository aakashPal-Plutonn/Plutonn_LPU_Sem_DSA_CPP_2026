#include<stdio.h>
#include<iostream>
using namespace std;

struct Node{
    int data;
    Node * left;
    Node * right;
    Node(int val){
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

int main(){
    // Level 0
    Node * root = new Node(10);
    
    // Level 1
    root->left = new Node(20);
    root->right = new Node(30);
    
    // Level 2
    root->left->left = new Node(30);
    root->left->right = new Node(40);
    
    root->right->left = new Node(50);
    return 0;
}