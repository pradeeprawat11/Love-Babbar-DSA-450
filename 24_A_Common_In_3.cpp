#include<iostream>
#include<vector>
using namespace std;


int main() {
	int n1 = 6; 
	int n2 = 5; 
	int n3 = 8; 
	int A[6] = {1, 5, 10, 20, 40, 80};
	int B[5] = {6, 7, 20, 80, 100};
	int C[8] = {3, 4, 15, 20, 30, 70, 80, 120};

	int i=0, j=0, k=0;
	vector<int> ans;

	while(i<n1 && j<n2 && k<n3) {
		if(A[i]==B[j] && B[j]==C[k]){
			if(ans.size()==0)
				ans.push_back(A[i]);
			else{
				if(ans[ans.size()-1]!=A[i])
					ans.push_back(A[i]);
			}
			i++,j++,k++;
		}
		else if(A[i]<B[j])
			i++;
		else if(B[j]<C[k])
			j++;
		else
			k++;
	}

	cout << "Common Elements :" << endl;
	for(int i=0; i<ans.size(); i++) {
		cout<<ans[i]<<" ";
	}

}
/*
----- Approach -----


------Complexity-----
Time -> O(n1+n2+n3)
Space -> O(1)

*/