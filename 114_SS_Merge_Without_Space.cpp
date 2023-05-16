#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int size1 = 4;
	int size2 = 5;

	int arr1[4] = {1, 3, 5, 7};
 	int arr2[5] = {0, 2, 6, 8, 9};

	int end = size1-1;
	int start = 0;

	while(arr1[end]>=arr2[start] && end>=0 && start<size2) {
		swap(arr1[end], arr2[start] );
		end--;
		start++;
	}

	sort(arr1, arr1 + size1);
	sort(arr2, arr2 + size2);

	for(int i=0; i<size1; i++) {
		cout << arr1[i] <<" ";
	}

	for(int i=0; i<size2; i++) {
		cout << arr2[i] <<" ";
	}cout<<endl;

	return 0;

}