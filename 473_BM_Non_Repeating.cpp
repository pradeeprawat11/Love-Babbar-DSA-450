#include<iostream>
#include<vector>
using namespace std;

int main() {
	int n = 6;
	int arr[n] = {1, 2, 3, 2, 1, 4};

	// Find xor of all elements
	int XxorY = 0;
	for(int i=0; i<n; i++) {
		XxorY = XxorY ^ arr[i];
	}

	// find rbms(Right Bit Manupulation Set) of XxorY
	int rbms = XxorY & -XxorY;

	int x=0, y=0;
	for(int i=0; i<n; i++) {
		// if elements & rbms==0
		if((rbms & arr[i])==0)
			// at last 1 element will remain
			x = x ^ arr[i];
		else
			// at last 1 element remain
			y = y ^ arr[i];
	}

	if(x<y)
		cout<<x<<" "<<y;
	else
		cout<<y<<" "<<x;
	return 0;
}