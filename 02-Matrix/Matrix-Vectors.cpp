#include<bits/stdc++.h>
using namespace std; 

int rows = 5;
int cols = 5; 

// this vector is copied in row vector
// so we have size as column 
vector<int> v(cols);

// Initialising 
vector<vector<int> > matrix(rows ,vector<int>(cols));

// Print Matrix :: Vector of Vectors 
void print(){
	int rows = matrix.size();
	int cols = matrix[0].size();

	for(int i=0 ;i<rows ; i++){
		for(int j=0 ; j<cols ; j++){
			cout<<matrix[i][j]<<" ";
		}
		cout<<endl;
	}
}

int main(){

	print();

	return 0;
}