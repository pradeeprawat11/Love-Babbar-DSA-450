#include<iostream>
#include<deque>
#include<vector>
using namespace std;

int main() {
	int n=9;
	int arr[9]={1,3,-1,-3,5,3,6,7};
	int k=3;

	vector<int> ans;

	deque<int> dq;


	for(int i=0; i<n; i++) {
		// if size of deque is greater than k then pop front
		if(!dq.empty() && dq.front()==i-k)
			dq.pop_front();

		/* while the current value is more than other deque value
		   pop from back because of ascending order */
		while(!dq.empty() && arr[dq.back()]<arr[i])
			dq.pop_back();

		// push in deque
		dq.push_back(i);
		
		// push the front element of deque as answer
		if(i>=k-1)
		   ans.push_back(arr[dq.front()]);
	}

	// print ans;
	for(int i=0; i<n-k; i++) {
		cout <<ans[i] << " ";
	}

	return 0;
}

/* -------Complexity-----
	TC = O(N)
	SC = O(k)