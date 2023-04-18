#include<iostream>
using namespace std;


int top=-1;
int size=10;
int Stack[10];

// Underflow
void underflow() {
	cout<<"Stack Underflow"<<endl;
}

// overflow
void overflow() {
	cout<<"Stack Overflow"<<endl;
}

// Push in stack
void push(int val) {
	if(top>size) {
		overflow();
		return;
	}

	top++;
	Stack[top]=val;
}

// Pop from stack
void pop() {
	if(top<0){
		underflow();
		return;
	}

	top--;
}

// Print stack elements
void printStack() {
	// int temp=top;
	for(int i=top; i>=0; i--) {
		cout << Stack[i] << " ";
	}
	cout<<endl;
}




int main() {
	
	push(3);
	push(5);
	push(3);
	push(8);

	printStack();

	pop();

	printStack();

	return 0;
}