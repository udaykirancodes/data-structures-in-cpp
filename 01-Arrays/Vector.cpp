#include<bits/stdc++.h>
#include<vector>
using namespace std; 

void print(vector<int>&v){
	int size = v.size();
	cout<<endl<<"Vector : ";
	for(int i=0 ; i<size ; i++){
		cout<<v[i]<<" ";
	}
}

void vectorFunctions(vector<int>&v){
	// Insert At End 
	v.push_back(10);

	// Insert At Front 
	v.insert(v.begin(),11);

	// Insert At Index
	v.insert(v.begin()+1,12);

	// Delete From Back
	v.pop_back();

	// Reverse Vector
	reverse(v.begin(),v.end());

	// Remove All Elements 
	v.clear();
	
	print(v);
}

int main(){

	vector<int> v; 

	vectorFunctions(v);

	return 0;
}