#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = right = NULL;
    }
};

Node* insert(Node* root, int value) {
    if (root == NULL) {
        return new Node(value);
    }

    if (value < root->data) {
        root->left = insert(root->left, value);
    }
    else if (value > root->data) {
        root->right = insert(root->right, value);
    }

    return root;
}

int findMin(Node* root) {
    if (root == NULL) {
        cout << "BST is empty." << endl;
        return -1;
    }

    while (root->left != NULL) {
        root = root->left;
    }

    return root->data;
}

int findMax(Node* root) {
    if (root == NULL) {
        cout << "BST is empty." << endl;
        return -1;
    }

    while (root->right != NULL) {
        root = root->right;
    }

    return root->data;
}

int main() {
    Node* root = NULL;

    root = insert(root, 50);
    root = insert(root, 30);
    root = insert(root, 70);
    root = insert(root, 20);
    root = insert(root, 40);
    root = insert(root, 60);
    root = insert(root, 80);

    cout << "Minimum Element: " << findMin(root) << endl;
    cout << "Maximum Element: " << findMax(root) << endl;

    return 0;
}