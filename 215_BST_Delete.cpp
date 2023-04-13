#include<iostream>
using namespace std;

// crata node
struct Node {
	int data;
	Node *left, *right;

	Node(int val) {
		data = val;
		left = NULL;
		right = NULL;
	}
};

// insert in BST
Node* insertBST(Node* root, int val) {
	// base
	if(root==NULL)
		return new Node(val);

	if(val < root->data)
		root->left = insertBST(root->left, val);
	else
		root->right = insertBST(root->right, val);

	return root;
}

// inorder 
void inorder(Node* root) {
	if(root==NULL)
		return;

	inorder(root->left);
	cout << root->data <<" ";
	inorder(root->right);
}

// inorder Successor
Node* inorderSucc(Node* root) {
	Node* curr = root;
	while(curr->left != NULL)
		curr = curr->left;

	return curr;
}

Node* deleteBST(Node* root, int key) {
	if(key < root->data)
		root->left = deleteBST(root->left, key);
	else if(key > root->data)
		root->right = deleteBST(root->right, key);
	else {
		if(root->left == NULL) {
			Node* temp = root->right;
			free(root);
			return temp;
		}
		else if(root->right == NULL){
			Node* temp = root->left;
			free(root);
			return temp;
		}
		
			Node* temp = inorderSucc(root->right);
			root->data = temp->data;
			root->right = deleteBST(root->right, temp->data);

	}
	return root;
}

// Delete node
// 1 - Node->leaf node
// 2 - Node->only one child
// 3 - Node->parent of 2 child


int main() {
	Node* root = NULL;
	root = insertBST(root, 4);
	insertBST(root, 2);
	insertBST(root, 6);
	insertBST(root, 7);
	insertBST(root, 1);

	inorder(root);
	deleteBST(root, 6);
	cout<<endl;
	inorder(root);

	return 0;
}