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

vector<int> bfs(vector<int> adj[], int n){
	// store nodes level vise
	queue<int> q;
	// visited array with default value
	int vis[n]={0};
	vis[1]=1;
	q.push(1);
	vector<int> ans;

	// complete trevel queue
	while(!q.empty()) {
		int node = q.front();
		ans.push_back(node);
		// pop visited node
		q.pop();

		vis[node]=1;

		// complete trevel each node
		for(auto it: adj[node]) {
			if(!vis[it]){
			// push each node
			q.push(it);
			// mark true
			vis[it]=1;
		  }
		}
	}
	return ans;
}

int main() {
	// nodes
	int n=8;

	// adjacency vector
	vector<int> adj[n+1];

	// insert node in graph
	graphInsert(adj, 1, 2);
	graphInsert(adj, 1, 6);
	graphInsert(adj, 2, 3);
	graphInsert(adj, 2, 4);
	graphInsert(adj, 4, 5);
	graphInsert(adj, 5, 7);
	graphInsert(adj, 6, 7);
	graphInsert(adj, 6, 8);

	// store bfs   call BSF fn
	vector<int> v = bfs(adj, n+1);

	cout<<"Graph BFS Travel :" << endl;
	for(int i=0; i<v.size(); i++) {
		cout<<v[i]<<" ";
	}

	return 0;
}