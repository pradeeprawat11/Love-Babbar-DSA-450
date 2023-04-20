#include<iostream>
using namespace std;

// Max heapify
void maxHeapify(int arr[], int n, int i) {
	int largest=i;
	int l=2*i+1;
	int r=2*i+2;

	if(l<n && arr[l]>arr[largest])
		largest = l;
	if(r<n && arr[r]>arr[largest])
		largest = r;

	if(largest != i) {
		swap(arr[i], arr[largest]);
		maxHeapify(arr, n, largest);
	}
}

// Min heapify
void minHeapify(int arr[], int n, int i) {
	int largest=i;
	int l=2*i+1;
	int r=2*i+2;

	if(l>n && arr[l]<arr[largest])
		largest = l;
	if(r>n && arr[r]<arr[largest])
		largest = r;

	if(largest != i) {
		swap(arr[i], arr[largest]);
		minHeapify(arr, n, largest);
	}
}

// Build Heap
void maxHeap(int arr[],int n) {
	for(int i=n/2-1; i>=0; i--) {
		maxHeapify(arr, n, i);
	}	
	cout<<"Max Heap :" << endl;
}

// Min Heap
void minHeap(int arr[],int n) {
	for(int i=n/2-1; i>=0; i--) {
		minHeapify(arr, n, i);
	}	
	cout<<"Min Heap :" << endl;
}

// Heap Sort
// void heapSort(int arr[], int n) {
// 	for(int i=n-1; i>0; i--){
// 		swap(arr[1], arr[i-1]);
// 		heapify(arr, i-1, 1);
// 	}
// }

void print(int arr[], int n) {
	for(int i=0; i<n; i++) {
		cout << arr[i] << " ";
	}cout<<endl;
}


int main() {
	int n=10;
	int arr[10]={3, 5, 9, 6, 8, 20, 10, 12, 18, 9};

	minHeap(arr, n);
	print(arr, n);

	maxHeap(arr, n);
	print(arr, n);
	// heapSort(arr, n);

	

	return 0;
}