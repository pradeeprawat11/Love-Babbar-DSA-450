#include<iostream>
using namespace std;
#include<bits/stdc++.h>

int main() {
	int n=4;
	int k=2;
	int arr[n]={1,5,10,8};

	// sort array
	sort(arr, arr+n);

	// innitialize ans
	int ans = arr[n-1]-k;

	// innitialize smallest
	int smallest = arr[0]+k;
	int largest = arr[n-1]-k;

	int mx,mn;

	for(int i=0; i<n-1; i++) {
		mx = max(largest, arr[i+1]-k);
		mn = min(smallest, arr[i]+k);

		if(mn>=0)
			ans = min(ans, mx-mn);
	}
	cout << "Minimum difference is :" << endl;
	cout << ans;
	return 0;
}