#include<iostream>
#include<vector>
using namespace std;

int main() {
		vector<int> nums = {3,1,-2,-5,2,-4};
		int n=6;

        vector<int> ps;
        vector<int> ng;
        vector<int> ans;

        for(int i=0; i<n; i++) {
        	// store negative elements
            if(nums[i]<0)
                ng.push_back(nums[i]);
            // store positive elements
            else
                ps.push_back(nums[i]);       
        }

        int n1 = ps.size();
        int n2 = ng.size();

        int x=0,y=0;

        while(x<n1 || y<n2) {
        	// first store positive
            if(x<n1){
                ans.push_back(ps[x]);
                x++;
            }
            // then store negatives alternatively
            if(y<n2){
                ans.push_back(ng[y]);
                y++;
            }
        }

        cout << "Rearranged elements :" << endl;
        for(int i=0; i<n; i++) {
        	cout << ans[i]<<" ";
        }

	return 0;
}

/*

-------Approach--------
1. Store negative ans positive elements separately
2. insert positive and negative element alternatively in new vector

------Complexity------
time = O(n)
space = O(n)

*/