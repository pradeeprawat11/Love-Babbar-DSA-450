#include<iostream>
using namespace std;

// create node
struct Node {
	int data;
	Node *left, *right;

	Node(int val) {
		data = val;
		left = NULL;
		right = NULL;
	}
};

// insert in bst
Node* insertBST(Node* root, int val) {
	if(root==NULL)
		return new Node(val);

	if(val < root->data)
		root->left = insertBST(root->left, val);
	else
		root->right = insertBST(root->right, val);

	return root;
}

// minimum in bst
int bstMin(Node* root){
	if(root->left == NULL)
		return root->data;

	return bstMin(root->left);
}

// maximum in bst
int bstMax(Node* root){
	if(root->right == NULL)
		return root->data;

	return bstMax(root->right);
}

int main() {
	Node* root = NULL;
	root = insertBST(root, 4);
	insertBST(root, 2);
	insertBST(root, 8);
	insertBST(root, 3);
	insertBST(root, 9);

	cout << "Min value in BST :" << endl;
	cout << bstMin(root);

	cout<<endl;

	cout << "Max value in BST :" << endl;
	cout << bstMax(root);


	return 0;
}