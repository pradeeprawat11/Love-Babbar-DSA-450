#include<iostream>
#include<vector>
#include<queue>
#include<bits/stdc++.h>
using namespace std;

// insert node by both side of edge
void graphInsert(vector<int> adj[], int u, int v) {
	adj[u].push_back(v);
	adj[v].push_back(u);
}

// dfs function
void dfs(int node, vector<int> adj[], vector<int> &ans, int vis[]) {
	// visit node
	if(vis[node]==1)
		return;
	
	vis[node]=1;
	// push node 
	ans.push_back(node);

	for(auto it: adj[node]) {
		if(!vis[it]) {
			// call for each node in adj list
			dfs(it, adj, ans, vis);
		}
	}
	// return ans;
}

int main() {
	// nodes
	int n=8;

	// adjacency vector
	vector<int> adj[n+1];

	// insert node in graph
	graphInsert(adj, 1, 2);
	graphInsert(adj, 1, 3);
	graphInsert(adj, 2, 5);
	graphInsert(adj, 2, 6);
	graphInsert(adj, 3, 7);
	graphInsert(adj, 3, 4);
	graphInsert(adj, 7, 8);
	graphInsert(adj, 8, 4);

	// create dfs vector  
	vector<int> ans;
	// innitially mark 0 to visited
	int vis[n+1]={0};

	// call dfs for first node
	dfs(1, adj, ans, vis);

	// print dfs
	cout<<"Graph DFS Travel :" << endl;
	for(int i=0; i<ans.size(); i++) {
		cout<<ans[i]<<" ";
	}

	return 0;
}