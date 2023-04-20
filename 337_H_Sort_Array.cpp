#include<iostream>
using namespace std;

// heapify
void heapify(int arr[], int n, int i) {
    // let the index i element as largest
    int largest = i;
    // left child
    int l = i*2 + 1;
    // right child
    int r = i*2 + 2;

    // if left child is greater then let it be largest
    if(l<n && arr[largest]<arr[l])
        largest = l;

    // if right child is greater then let it be largest
    if(r<n && arr[largest]<arr[r])
        largest = r;

    // if selected element if smaller
    if(largest != i) {
        // swap and take grestest as parent
        swap(arr[largest] ,arr[i]);
        // check for next element
        heapify(arr, n, largest);
    }

}

void buildHeap(int arr[], int n) {
    for(int i=n/2; i>=0; i--) {
        heapify(arr, n, i);
    }
}

void print(int arr[], int n) {
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }cout<<endl;
}

int main() {

    int n=4;
    int arr[4]={3,5,2,8};

    buildHeap(arr, n);

    for(int i=n-1; i>=0; i--) {
        swap(arr[i], arr[0]);
        heapify(arr, n, i);
    }

    print(arr, n);

    return 0;
}