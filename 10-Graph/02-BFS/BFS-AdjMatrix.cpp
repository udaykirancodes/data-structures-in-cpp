// BFS-AdjMatrix
#include<bits/stdc++.h>
using namespace std; 

void BFS(int start , int n , vector<vector<int>>&adj){
	queue<int>q;
	bool visited[n];
	memset(visited,false,sizeof(visited));
	q.push(start);
	visited[start] = true; 
	while(!q.empty()){
		int node = q.front(); 
		cout<<node<<" "; 
		q.pop(); 
		for(int i=0 ; i<n ; i++){
			if((!visited[i]) && (adj[node][i] == 1)){
				visited[i] = true; 
				q.push(i);
			}
		}
	}
}

int main(){
	int n; 
	cout<<"Enter No of Nodes/Vertices : ";
	cin>>n; 
	int m; 
	cout<<"Enter No of Edges : "; 
	cin>>m; 

	vector<vector<int>>adj(n,vector<int>(n));
	// take all edges 
	for(int i=0 ; i<m ; i++){
		int u,v; 
		cin>>u>>v; 
		adj[u][v] = 1;
		// undirected  
		adj[v][u] = 1; 
	}

	int start = 0; 
	BFS(start , n ,adj);

	// for(int i=0 ; i<n+1 ; i++){
	// 	for(int j=0 ; j<n+1 ; j++){
	// 		cout<<adj[i][j]<<" "; 
	// 	}
	// 	cout<<endl; 
	// }

	return 0; 
}