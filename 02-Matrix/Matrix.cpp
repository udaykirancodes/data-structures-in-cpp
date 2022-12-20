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
	int count = 1;
	for(int i=0 ; i<rows ; i++){
		for(int j=0 ; j<cols ; j++){
			// cin>>matrix[i][j]; // user input 
			matrix[i][j] = count++; 
		}
		cout<<endl;
	}
}

// Transpose 
void transpose(){ // printing or copying to another matrix 
	cout<<"Transpose : "<<endl;
	for(int i=0 ; i<rows;i++){
		for(int j=0 ; j<cols ; j++){
			cout<<matrix[j][i]<<" ";
		}
		cout<<endl;
	}
}

// Inplace Tranpose :: updates the matrix 
void transposeInplace(){
	for(int i=0 ; i<rows ; i++){
		for(int j=0 ; j<i ; j++){
			swap(matrix[i][j],matrix[j][i]);
		}
	}
}
int main(){

	takeInput();

	print();

	// transpose();

	transposeInplace();

	print();



	return 0;
}