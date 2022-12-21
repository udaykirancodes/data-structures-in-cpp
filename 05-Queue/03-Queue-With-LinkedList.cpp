#include<iostream>
using namespace std;

// Strucute of Linked List
struct Node{
	int data; 
	Node *next;
	Node(int x){
		data = x; 
		next = nullptr;
	}
};
/*
First Node of Linked List is : Front of Qeueue
Last Node of Linked List is : Rear 
*/

// Queue with Linked List 
struct Queue{
	Node *front ;
	Node *rear;
	// constructor 
	Queue(){
		front = nullptr;
		rear = nullptr; 
	}
	// Enqueue
	void enqueue(int x){
		Node *ptr = new Node(x); 
		if(front == nullptr){
			front = rear = ptr;
			return ;
		}
		else{
			// insert at end 
			rear->next = ptr;
			rear = ptr; 
		}
	}
	// Dequeue 
	void dequeue(){
		 if(front == nullptr){
		 	return;
		 }
		 Node *temp = front;
		 front = front->next;
		 // corner case making null if empty  
		 if(front == nullptr){
		 	rear = nullptr;
		 }
		 delete temp;
	}
};	

int main(){
	Queue q; 
	q.enqueue(10);
	return 0;
}