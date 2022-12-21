#include<bits/stdc++.h>
using namespace std;

struct Stack{
	int top;
	int size;
	int *arr;
	// constructor 
	Stack(int s){
		size = s;
		arr = new int[s];
		top = -1; 
	}
	// is Empty 
	bool isEmpty(){
		// if top is -1 
		if(top == -1){
			return true;
		}
		return false; 
	}
	// is Full 
	bool isFull(){
		if(top == size - 1){
			return true;
		}
		return false; 
	}
	// Push 
	void push(int data){
		if(isFull()){
			cout<<"OverFlow"<<endl;
			return;
		}
		else{
			top++;
			arr[top] = data; 
		}
	}
	// Pop
	void pop(){
		if(isEmpty()){
			cout<<"UnderFlow"<<endl;
			return;
		}
		else{
			cout<<"Popped : "<<arr[top]<<endl;
			top--;
		}
	}
	// Top 
	int topElem(){
		if(!isEmpty()){
			return arr[top];
		}
		return INT_MIN;
	}
};

int main(){
	Stack s(2);
	// s.pop();
	// s.push(2);
	// s.push(3);
	// s.push(1);
	// s.push(4);
	cout<<s.topElem()<<endl;
	if(s.isEmpty()){
		
		cout<<"True"<<endl;
	}
	else{
		cout<<"False"<<endl;
	}

	return 0;
}