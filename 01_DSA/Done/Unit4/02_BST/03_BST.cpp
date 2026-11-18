int findMinRecursive(Node* root) {
    if (root == NULL) {
        return -1;
    }

    if (root->left == NULL) {
        return root->data;
    }

    return findMinRecursive(root->left);
}

int findMaxRecursive(Node* root) {
    if (root == NULL) {
        return -1;
    }

    if (root->right == NULL) {
        return root->data;
    }

    return findMaxRecursive(root->right);
}