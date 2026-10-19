#include <iostream>
#include <string>
using namespace std;

struct Node {
    int key;
    string branch;
    Node *left, *right;

    Node(int k, string b) {
        key = k;
        branch = b;
        left = right = NULL;
    }
};

Node* insert(Node* root, int k, string b) {
    if (!root)
        return new Node(k, b);

    if (k < root->key)
        root->left = insert(root->left, k, b);
    else if (k > root->key)
        root->right = insert(root->right, k, b);

    return root;
}

bool search(Node* root, int k) {
    if (!root)
        return false;

    if (root->key == k)
        return true;

    return k < root->key
        ? search(root->left, k)
        : search(root->right, k);
}

void inorder(Node* root) {
    if (!root)
        return;

    inorder(root->left);
    cout << root->key << " - " << root->branch << endl;
    inorder(root->right);
}

void common(Node* a, Node* b) {
    if (!a)
        return;

    if (search(b, a->key))
        cout << a->key << " - " << a->branch << endl;

    common(a->left, b);
    common(a->right, b);
}

void merge(Node* root, Node*& result) {
    if (!root)
        return;

    result = insert(result, root->key, root->branch);
    merge(root->left, result);
    merge(root->right, result);
}

int main() {
    Node *bst1 = NULL, *bst2 = NULL, *merged = NULL;
    int n, key;
    string name;

    cout << "Enter number of branches in BST 1: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Enter branch key and name: ";
        cin >> key >> name;
        bst1 = insert(bst1, key, name);
    }

    cout << "Enter number of branches in BST 2: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Enter branch key and name: ";
        cin >> key >> name;
        bst2 = insert(bst2, key, name);
    }

    cout << "\nCommon Branch Keys:\n";
    common(bst1, bst2);

    merge(bst1, merged);
    merge(bst2, merged);

    cout << "\nMerged Branch Database:\n";
    inorder(merged);

    return 0;
}