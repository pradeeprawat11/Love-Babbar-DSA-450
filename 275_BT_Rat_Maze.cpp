#include<iostream>
using namespace std;

bool isSafe(int** arr, int x, int y, int n) {
	if(x<n && y<n && arr[x][y]==1)
		return true;

	return false;
}

bool ratMaze(int** arr, int x, int y, int n, int** bt) {
	// base case
	if(x==(n-1) && y==(n-1)) {
		bt[x][y]=1;
		return true;
	}

	if(isSafe(arr, x, y, n)) {
		bt[x][y]=1;
		if(ratMaze(arr, x+1, y, n, bt))
			return true;
		if(ratMaze(arr, x, y+1, n, bt))
			return true;
		bt[x][y]=0;
		return false;
	}
	return false;
}

int main() {
	int n=5;

	// Dynamic memory allocation
	int** arr=new int*[n];
	for(int i=0; i<n; i++) {
		arr[i]=new int[n];
	}

	for(int i=0; i<n; i++) {
		for(int j=0; j<n; j++) {
				cin >> arr[i][j];
			}		
	}

	if(arr[n-1][n-1]==0) {

		cout<<-1;
		return 0;
	}

	int** bt=new int*[n];
	for(int i=0; i<n; i++) {
		bt[i]=new int[n];
		for(int j=0; j<n; j++) {
			bt[i][j]=0;
		}
	}

	if(ratMaze(arr, 0, 0, n, bt)) {
		for(int i=0; i<n; i++) {
			for(int j=0; j<n; j++) {
				cout << bt[i][j] << " ";
			}cout<<endl;
		}
	}
	
	return 0;
}