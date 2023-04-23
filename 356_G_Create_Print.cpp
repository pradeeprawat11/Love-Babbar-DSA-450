#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;



int main() {

	int n=5, m=7;
	
	// Adjacency Matrix method

	int adj[n+1][n+1];

	// innitialize to 0
	for(int i=0; i<n+1; i++) {
		for(int j=0; j<n+1; j++) {
			adj[i][j]=0;
		}
	}

	// provid input
	for(int j=0; j<m; j++) {
		int u,v;
		cin >> u >> v;
		adj[u][v]=1;
		adj[v][u]=1;		

	}
		
	// print graph
	for(int i=1; i<n+1; i++) {
		for(int j=1; j<n+1; j++) {
			cout << adj[i][j] << " ";
		}cout<<endl;
	}

	// Adjacency List Method
	vector<int> adjV[n+1];

	for(int j=1; j<=m; j++) {
		int u,v;
		cin >> u >> v;
		adjV[u].push_back(v);
		adjV[v].push_back(u);
	}

	for(int i=1; i<n; i++) {
		cout<<i<< " ";
		for (auto x : adjV[i]){
            cout << "->" << x;
		}
		cout<<endl;
	}

	return 0;
}