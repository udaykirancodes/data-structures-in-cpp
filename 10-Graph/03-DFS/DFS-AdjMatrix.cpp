// DFS-AdjMatrix.cpp
// AdjacencyMatrix
#include<bits/stdc++.h>
using namespace std; 

void dfs(int start , vector<bool>&visited , vector<vector<int> >&adj){
	cout<<start<<" ";
	visited[start] = true; 
	for(int i=0 ; i<adj[start].size() ; i++){
		if(!visited[i] && adj[start][i]==1){
			dfs(i,visited,adj);
		}
	}
}

void dfsOfGraph(vector<vector<int> >adj){
	int n = adj.size();
	vector<bool>visited(n,false); 
	dfs(0,visited,adj);
}
int main(){
	int n; 
	cout<<"Enter No of Nodes/Vertices : ";
	cin>>n; 
	int m; 
	cout<<"Enter No of Edges : "; 
	cin>>m; 

	vector<vector<int>>adj(n,vector<int>(n)); // for 0 based indexing 
	// take all edges 
	for(int i=0 ; i<m ; i++){
		int u,v; 
		cin>>u>>v; 
		adj[u][v] = 1;
		// undirected  
		adj[v][u] = 1; 
	}

	dfsOfGraph(adj);

	return 0;

	for(int i=0 ; i<n+1 ; i++){
		for(int j=0 ; j<n+1 ; j++){
			cout<<adj[i][j]<<" "; 
		}
		cout<<endl; 
	}

	return 0; 
}