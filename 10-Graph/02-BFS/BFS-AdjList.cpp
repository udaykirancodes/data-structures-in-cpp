// BFS-AdjList
#include<bits/stdc++.h>
using namespace std; 

void BFS(int start,int n,vector<int>adj[]){
	queue<int>q; 
	int visited[n];
	memset(visited,0,sizeof(visited)); 
	visited[start] = 1; 
	q.push(start); 
	while(!q.empty()){
		int node = q.front();
		cout<<node<<" ";
		q.pop(); 
		for(auto it : adj[node]){
			if(!visited[it]){
				visited[it]=1; 
				q.push(it);
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

	vector<int>adj[n+1]; // 

	// take all edges 
	for(int i=0 ; i<m ; i++){
		int u,v; 
		cin>>u>>v; 
		adj[u].push_back(v);
		// undirected  
		adj[v].push_back(u);
	}

	int start = 0; 
	BFS(start,n,adj);

	cout<<endl<<endl; 

	for(int i=0 ; i<n+1 ; i++){
		for(auto e : adj[i]){
			cout<<e<<" ";
		}
		cout<<endl;
	}

	return 0; 
}