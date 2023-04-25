#include<iostream>
#include<vector>
using namespace std;

int main() {

	int n=3;
	int coins[n] = {1,2,3};
	int amount = 4;

	// DP - 2d vector
	vector<vector<int>> dp(n, vector<int>(amount+1, 0));

	for(int sum=0; sum<=amount; sum++) {
		dp[0][sum] = (sum%coins[0]==0);
	}

	for(int ind=1; ind<n; ind++) {
		for(int sum=0; sum<=amount; sum++) {

			int notTake = dp[ind-1][sum];
			int take = 0;

			if(coins[ind] <= sum)
				take = dp[ind][sum-coins[ind]];

			dp[ind][sum] = take + notTake;
		}
	}

	cout << "Ways to change coin :" << endl;
	cout <<  dp[n-1][amount];

	return 0;
}