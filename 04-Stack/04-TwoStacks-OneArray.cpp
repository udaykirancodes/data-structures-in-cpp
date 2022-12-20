#include<bits/stdc++.h>
using namespace std; 

class Stack{
	int *arr;
	int top1;
	int top2;
	int size;
	// constructors 
	Stack(int s){
		this -> size = s; 
		this -> top1 = 0;
		this -> top2 = n;
		this -> arr = new int[s]; 
	}
	// push :: stack 1 
	void push1(int data){
		// atleast 1 empty space is present 
		if(top2 - top1 > 1){
			top1++;
			arr[top1] = data;
		}
		else{
			cout<<"Stack Overflow"<<endl;
		}
	}
	// Push :: stack 2 
	void push2(int data){
		// atleast 1 empty space is present 
		if(top2 - top1 > 1){
			top2--;
			arr[top2] = data; 
		}
		else{
			cout<<"Stack Overflow"<<endl;
		}
	}
	// Pop :: stack 1
	int pop1(){
		// atleast 1 element is present in 1st stack 
		if(top1 >= 0){
			int ans = arr[top1];
			top1--;
			return ans;
		}
		return -1;
	}
	// Pop :: stack 2
	int pop2(){
		// atleast 1 element is present in 2st stack 
		if(top2 >= 0){
			int ans = arr[top2];
			top2++;
			return ans;
		}
		return -1;
	}
};

int main(){

	return 0;
}