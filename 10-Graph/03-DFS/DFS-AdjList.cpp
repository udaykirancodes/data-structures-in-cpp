// DFS-AdjList
#include<bits/stdc++.h>
using namespace std; 

void dfs(int node ,vector<bool>&visited , vector<int>adj[]){
	visited[node] = true; 
	cout<<node<<" ";
	for(auto it : adj[node]){
		if(!visited[it]){
			dfs(it,visited,adj);
		}
	}
}

void dfsOfGraph(int n,vector<int>adj[]){
	vector<bool>visited(n,false);
	int start = 1; 
	dfs(start ,visited,adj);
}	

int main(){
	int n; 
	cout<<"Enter No of Nodes/Vertices : ";
	cin>>n; 
	int m; 
	cout<<"Enter No of Edges : "; 
	cin>>m; 

	vector<int>adj[n]; // 

	// take all edges 
	for(int i=0 ; i<m ; i++){
		int u,v; 
		cin>>u>>v; 
		adj[u].push_back(v);
		// undirected  
		adj[v].push_back(u);
	}

	dfsOfGraph(n,adj);

	// for(int i=0 ; i<n+1 ; i++){
	// 	for(auto e : adj[i]){
	// 		cout<<e<<" ";
	// 	}
	// 	cout<<endl;
	// }

	return 0; 
}