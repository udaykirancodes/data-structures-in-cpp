// AdjacencyList
#include<bits/stdc++.h>
using namespace std; 

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

	for(int i=0 ; i<n+1 ; i++){
		for(auto e : adj[i]){
			cout<<e<<" ";
		}
		cout<<endl;
	}

	return 0; 
}