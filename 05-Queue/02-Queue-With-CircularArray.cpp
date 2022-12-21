// 02-Queue-With-CircularArray
class Queue{
	int size;
	int front;
	int rear;
	int capacity;
	int *arr;
	// constructor 
	Queue(int cap){
		capacity = cap;
		size = 0;
		front = -1;
		rear = -1; 
		arr = new int[cap];
	}
	// is Empty 
	bool isEmpty(){
		if(size == 0){
			return true;
		}
		return false;
	}
	// is Full 
	bool isFull(){
		if(size == capacity){
			return true;
		}
		return false; 
	}
	// Enqeuue
	void enqueue(int x){
		if(isFull()) return ;
		rear = (rear+1)%capacity;
		arr[rear] = x;
		size++;
	}
	// Dequeue
	int dequeue(){
		if(isEmpty()){
			return -1;
		}
		int d = arr[front];
		front = (front+1)%capacity;
		size--;
		return d; 
	}
};