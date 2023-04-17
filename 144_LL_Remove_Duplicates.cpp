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

void removeDuplicate(Node* head) {
	if(!head || head->next==NULL)
		return;

	Node* prev = head;
	Node* curr = head->next;

	while(curr != NULL) {
		if(prev->data == curr->data) {
			Node* temp = curr;
			curr = curr->next;
			prev->next = curr;
			temp->next=NULL;
			delete(temp);
		}
		else {
			prev = prev->next;
			curr = curr->next;
		}
	}
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
	cout<<"NULL"<<endl;
}

int main() {
	
	Node* head = NULL;
	insertLL(head, 4);
	insertLL(head, 2);
	insertLL(head, 2);
	insertLL(head, 5);
	insertLL(head, 6);
	insertLL(head, 6);
	insertLL(head, 8);

	printLL(head);
	removeDuplicate(head);
	cout<<"After Removing Duplicates :" <<endl;
	printLL(head);

	return 0;
}