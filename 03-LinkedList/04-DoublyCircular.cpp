#include<iostream>
using namespace std; 

// Structure of Singly Linked List 
struct Node{
	int data;
	Node *prev;
	Node *next;
	Node(int x){
		this->data = x; 
		next = nullptr;
		prev = nullptr; 
	}
};

// Traversal 
void print(Node *head){
	if(head == nullptr) return;
	cout<<endl<<"Linked List : ";
	Node *current = head; 
	do{
		cout<<current->data<<" ";
		current = current->next;
	}while(current != head);
}

// Insert At Head
Node *insertAtHead(Node *head , int data){
	// New Node Creation
	Node *ptr = new Node(data);
	if(head == nullptr){
		ptr->next = ptr; // circular connect 
		ptr->prev = ptr; // circular connect 
		return ptr; 
	}
	Node *tail = head->prev; // no need to traverse in doubly linked list 
	ptr->next = head; 
	head->prev = ptr; 
	ptr->prev = tail;
	tail->next = ptr;
	return ptr; 
}

// Insert At Tail 
Node *insertAtTail(Node *head , int data){
	Node *ptr = new Node(data);
	if(head == nullptr){
		ptr->next = ptr; // circular connect 
		ptr->prev = ptr; // circular connect 
		return ptr;
	}
	Node *tail = head->prev; 
	tail->next  = ptr; 
	ptr->prev = tail;
	tail = ptr; 
	head->prev = tail; // connect back 
	tail->next = head; // connect back 
	return head; 
}
// Delete Head 
Node *deleteFirstNode(Node *head){
	if(head == nullptr){
		return nullptr;
	}
	else if(head->next == head){
		delete head;
		return nullptr;
	}
	else{
		Node *newHead = head->next;
		Node *tail = head->prev;
		tail->next = newHead; 
		newHead->prev = tail;
		delete head;
		return newHead;
	}
}
// Delete Tail
Node *deleteLastNode(Node *head){
	if(head == nullptr){
		return nullptr;
	}
	else if(head->next == head){
		delete head;
		return nullptr;
	}
	else{
		Node *tail = head->prev;
		Node *newTail = tail->prev; 
		delete tail; 
		newTail->next = head;
		head->prev = newTail;
		return head; 
	}
}
int main(){
	Node *head = nullptr;
	head = insertAtHead(head,5);
	head = insertAtHead(head,0);
	head = insertAtHead(head,-5);
	head = insertAtHead(head,-10);
	head = insertAtTail(head,10);
	// head = insertAtTail(head,15);
	// head = insertAtTail(head,20);
	head = deleteFirstNode(head);
	head = deleteLastNode(head);
	print(head);
	return 0;
}