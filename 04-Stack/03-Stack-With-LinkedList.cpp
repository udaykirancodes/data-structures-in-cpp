#include<bits/stdc++.h>
using namespace std; 

// Structure for Linked List 
struct Node{
	int data;
	Node *next; 
	Node(int x){
		data = x; 
		next = nullptr;
	}
};

// Stack 
class Stack{
public:
	Node *top = nullptr;
	int size = 0;
	MyStack(){
		top = nullptr;
		size = 0;
	}
	// is Empty 
	bool isEmpty(){
		if(top == nullptr){
			return true;
		}
		return false; 
	}
	// is Full 
	bool isFull(){
		return false; // we can create many no of linked list nodes 
	}
	// Push 
	void push(int data){
		// insert at head 
		Node *temp = new Node(data);
		temp->next = top;
		top = temp;
		size++;
	}
	int pop(){
		if(!isEmpty()){
			Node *tp = top;
			int d = tp->data;
			top = top->next;
			delete tp;
			return d;
		}
		return -1;
	}
};

int main(){
	Stack s;
	cout<<s.isEmpty()<<endl;
	s.push(10);
	cout<<s.isEmpty()<<endl;
	cout<<s.pop()<<endl;
	cout<<s.isEmpty()<<endl;
	return 0;
}