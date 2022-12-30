#include<iostream>
using namespace std;

struct Queue{
	int size;
	int front;
	int rear;
	int *arr ;
	// constructor 
	Queue(int s){
		front = rear = -1;
		size = s; 
		arr = new int[s]; 
	}

	// is Full 
	bool isFull(){
		if(rear == size - 1){
			return true; 
		}
		return false; 
	}
	// is Empty 
	bool isEmpty(){
		if(front == rear){
			return true; 
		}
		return false; 
	}
	// Enqueue
	void enqueue(int data){
		if(isFull()){
			cout<<"OverFlow"<<endl;
			return;
		}
		else{
			rear = rear + 1; 
			arr[rear] = data; 
		}
	}
	// Dequeue 
	int dequeue(){
		if(isEmpty()){
			cout<<"UnderFlow"<<endl;
			return -1; 
		}
		else{
			int res = arr[front];
			front = front + 1;
			return res; 
		}
	}
	
};

int main(){
	Queue *q = new Queue(3);
	q->enqueue(10);
	cout<<q->size<<endl;
	return 0;
}