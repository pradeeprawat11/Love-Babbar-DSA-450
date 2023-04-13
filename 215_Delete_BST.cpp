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

// Print BST - Inorder(Ascending)
void inorder(Node* root) {
	if(root == NULL)
		return;

	inorder(root->left);
	cout << root->data << " ";
	inorder(root->right);
}

int main() {
	Node* root = NULL;
	root = insertBST(root, 3);
	insertBST(root, 6);
	insertBST(root, 7);
	insertBST(root, 2);
	insertBST(root, 9);

	inorder(root);

	return 0;
}