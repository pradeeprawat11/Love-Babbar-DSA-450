#include<iostream>
using namespace std;

// declare array for stack
int size = 10;
int queue[10];
int s=-1, e=-1;

void printQueue() {
	cout << "Queue :" <<endl;
	for(int i=s; i<=e; i++) {
		cout << queue[i] <<" ";
	}
	cout<<endl;
}

void enqueue(int val) {
	if(e>size){
		cout<<"Queue Full !"<<endl;
		return;
	}

	if(s==-1)
		s=0;
	e++;
	queue[e]=val;
	cout<<val<<" Enqueued !"<<endl;
	printQueue();
}

void dequeue() {
	if(s==e) {
		cout<<"Queue Empty !"<<endl;
		return;
	}

	cout<<queue[s]<<" Dequeued !"<<endl;
	s++;
	printQueue();
}



int main() {
	enqueue(4);
	enqueue(5);
	enqueue(5);
	enqueue(2);
	enqueue(5);
	dequeue();
	return 0;
}