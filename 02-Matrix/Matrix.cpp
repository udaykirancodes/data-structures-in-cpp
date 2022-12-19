#include<bits/stdc++.h>
using namespace std; 

const int rows = 3;
const int cols = 3; 
int matrix[rows][cols];

// Print Matrix 
void print(){
	cout<<endl<<"Matrix : "<<endl;
	for(int i=0 ; i<rows ; i++){
		for(int j=0 ; j<cols ; j++){
			cout<<matrix[i][j]<<" ";
		}
		cout<<endl;
	}
}

// Take Input 
void takeInput(){
	for(int i=0 ; i<rows ; i++){
		for(int j=0 ; j<cols ; j++){
			cin>>matrix[i][j];
		}
		cout<<endl;
	}
}

int main(){

	// takeInput();

	print();



	return 0;
}