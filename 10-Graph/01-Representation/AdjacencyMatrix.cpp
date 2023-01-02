// AdjacencyMatrix
#include<bits/stdc++.h>
using namespace std; 

int main(){
	int n; 
	cout<<"Enter No of Nodes/Vertices : ";
	cin>>n; 
	int m; 
	cout<<"Enter No of Edges : "; 
	cin>>m; 

	int adj[n+1][n+1]; // for 0 based indexing 
	memset(adj,0,sizeof(adj));
	// take all edges 
	for(int i=0 ; i<m ; i++){
		int u,v; 
		cin>>u>>v; 
		adj[u][v] = 1;
		// undirected  
		adj[v][u] = 1; 
	}

	for(int i=0 ; i<n+1 ; i++){
		for(int j=0 ; j<n+1 ; j++){
			cout<<adj[i][j]<<" "; 
		}
		cout<<endl; 
	}

	return 0; 
}