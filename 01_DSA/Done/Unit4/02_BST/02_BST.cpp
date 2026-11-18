#include<stdio.h>
#include<iostream>
using namespace std;

struct Node{
    int data;
    Node * left;
    Node * right;
    Node(int data){
        data = data;
        left = NULL;
        right = NULL;
    }
};

// insertion using recursion : TC = O(log n), SC = O(log n)
class Solution {
public:
    Node* insertIntoBST(Node* root, int data) {
        if(root == NULL){
            return new Node(data);
        }
        if(data < root->data){
            root->left = insertIntoBST(root->left, data);
        } else if(data > root->data){
            root->right = insertIntoBST(root->right, data);
        }
        return root;
    }
};

class Solution {
public:
    Node* insertIntoBST(Node* root, int data) {
        if(root == NULL){
            return new Node(data);
        }

        Node * ansRoot = root;
        while(true){
            if(data < root->data){
                if(!root->left){
                    root->left = new Node(data);
                    break;
                } else {
                    root = root->left;
                }
            } else if(data > root->data){
                if(!root->right){
                    root->right = new Node(data);
                    break;
                } else {
                    root = root->right;
                }
            }
        }
        return ansRoot;
    }
};

int main(){



    return 0;
}