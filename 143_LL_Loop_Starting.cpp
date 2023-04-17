#include<iostream>
using namespace std;

struct Node {
	int data;
	Node* next;
	Node(int val) {
		data = val;
		next = NULL;
	}
};

// insert in LL
void insertLL(Node* &head, int val) {

	Node* n = new Node(val);

	if(head==NULL) {
		head = n;
		return;
	}

	Node* temp = head;

	while(temp->next != NULL) {
		temp = temp->next;
	}

	temp->next = n;	
}

// create loop
void createLoop(Node* &head, int k) {
	// if(head==NULL)
	// 	return;
	Node* temp = head;
	Node* temp2 = head;

	while(temp->next != NULL){
		temp = temp->next;
	}
	while(k--){
		temp2 = temp2->next;
	}
	
	temp->next = temp2;
}

// print LL
void printLL(Node* &head) {

	if(head == NULL)
		return;

	Node* temp = head;

	while(temp != NULL) {
		cout << temp->data << "->";
		temp = temp->next;
	}
	cout<<"NULL";
}

int main() {
	
	Node* head = NULL;
	insertLL(head, 4);
	insertLL(head, 5);
	insertLL(head, 2);
	insertLL(head, 5);
	insertLL(head, 6);
	insertLL(head, 8);

	printLL(head);
	createLoop(head, 4);
	printLL(head);

	return 0;
}