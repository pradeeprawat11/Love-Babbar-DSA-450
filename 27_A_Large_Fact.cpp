#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

// find factorial
vector<int> factorial(int N){
        // 1 store 1 in fact vector
        vector<int> fact;
        
        fact.push_back(1);
        
        // 2 traverse from 2 till N
        for(int i=2; i<=N; i++) {
            int carry = 0;
            
            // 3 traverse previous fact ans multiply by next one
            for(int j=0; j<fact.size(); j++) {
                int val = fact[j]*i + carry;
                fact[j] = val%10;
                carry = val/10;
            }
            
            // 4 store remaining carry in fact
            while(carry != 0) {
                fact.push_back(carry%10);
                carry /= 10;
            }
        }
        
        reverse(fact.begin(), fact.end());
        
        return fact;
        
    }

int main() {
	int n = 10;

	vector<int> fact = factorial(n);

	cout << "Factorial :" << endl;
	for(int i=0; i<fact.size(); i++) {
		cout << fact[i]; 
	}

	return 0;
}