#include<bits/stdc++.h>
using namespace std; 

// Take Input 
void takeInput(int *a, int n){
	for(int i=0 ; i<n ; i++){
		cout<<"Enter : ";
		cin>>a[i];
	}
}
// Print Elements 
void print(int a[] , int n){
	cout<<endl<<"Array : ";
	for(int i=0 ; i<n ; i++){
		cout<<a[i]<<" ";
	}
}
// Insert At Index 
void insertAtIndex(int a[] , int n , int index , int value){
	int end = n-1;
	// copying elements to its next index 
	for(int i=end ; i>index ; i--){
		a[i] = a[i-1];  
	}
	a[index] = value;
}
void insertAtPosition(int a[] , int n , int pos , int val){
	// index = position - 1
	insertAtIndex(a,n,pos-1,val);
}

// Array Reversal 
void reverseArray(int a[] , int n){
	int start = 0; 
	int end = n-1;
	while(start<end){
		swap(a[start],a[end]);
		start++;
		end--;
	}
}

int main(){

	// initialising array with values 
	int a[10] = {0,1,2,3,4,5,6,7,8,9};

	int n = sizeof(a)/sizeof(a[0]);

	cout<<"Size of Array : "<<n<<endl;

	// takeInput(a,n);

	// reverseArray(a,n);

	// print(a,n);

	// insertAtIndex(a,n,5,55);

	// insertAtPosition(a,n,5,55);

	// print(a,n);

	return 0;
}