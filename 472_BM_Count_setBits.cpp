#include<iostream>
#include<vector>
#include<bits/stdc++.h>

vector<int> binary(int n){
        vector<int> ans;
        while(n>0){
            ans.push_back(n%2);
            n = n/2;
        }
        return ans;
    }

int main() {
	int n=4;

	vector<int> ans = binary(n);

	// ans = binaryNo(n);

	int setBits = 0;
	for(int i=0; i<ans.size(); i++) {
		if(ans[i]==1)
			setbits++;
	}

	cout << "Number of set Bits is :" << endl;
	cout << setBits;
}