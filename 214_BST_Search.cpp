#include<iostream>
using namespace std;

// Create tree node
struct Node {
	int data;
	Node* left;
	Node* right;

	Node(int val) {
		data = val;
		left = NULL;
		right = NULL;
	}
};

// Insert in BST
Node* insertBST(Node* root, int key) {
	// Base Case
	if(root == NULL) 
		return new Node(key);

	if(key < root->data) 
		root->left = insertBST(root->left, key);
	else
		root->right = insertBST(root->right, key);

	return root;
}

// Search BST
bool searchBST(Node* root, int key) {
	// base
	if(root == NULL)
		return false;

	if(root->data == key)
		return true;

	if(key < root->data)
		return searchBST(root->left, key);

	return searchBST(root->right, key);
}

int main() {
	Node* root = NULL;
	root = insertBST(root, 3);
	insertBST(root, 6);
	insertBST(root, 7);
	insertBST(root, 2);
	insertBST(root, 9);

	if(searchBST(root, 3))
		cout << "Key is Pesent";
	else
		cout << "Key is Absent";

	return 0;
}