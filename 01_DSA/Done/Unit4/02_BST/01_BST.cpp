#include<stdio.h>
#include<iostream>
using namespace std;

struct Node{
    int data;
    Node * left;
    Node * right;
    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

// searching using recursion : TC = O(log n), SC = O(log n)
class Solution {
    public:
    bool search(Node* root, int key) {
        // code here
        if(root == NULL){
            return false;
        }
        if(root->data == key){
            return true;
        }
        
        if(root->data > key){
            return search(root->left, key);
        }
        
        if(root->data < key){
            return search(root->right, key);
        }
    }
};

// searching using iteration : TC = O(log n)
class Solution {
    public:
    bool search(Node* root, int key) {
        // code here
        while(root != NULL){
            if(root->data == key){
                return true;
            }
            if(root->data > key){
                root = root->left;
            } else if(root->data < key){
                root = root->right;
            }
        }
        return false;
    }
};

int main(){



    return 0;
}