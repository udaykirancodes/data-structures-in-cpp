#include<iostream>
using namespace std; 

// Structure of Singly Linked List 
struct Node{
	int data;
	Node *next;
	Node(int x){
		this->data = x; 
		next = nullptr; 
	}
};

// Traversal 
void print(Node *head){
	cout<<endl<<"Linked List : ";
	while(head != nullptr){
		cout<<(head->data)<<" ";
		head = head->next;
	}
}

// Insert At Head
Node *insertAtHead(Node *head , int data){
	// New Node Creation
	Node *ptr = new Node(data);
	if(head == nullptr){
		return ptr; 
	}
	ptr->next = head; 
	return ptr; 
}

// Insert At Tail 
Node *insertAtTail(Node *head , int data){
	Node *ptr = new Node(data);
	if(head == nullptr){
		return ptr;
	}
	Node *q = head;
	while(q->next != nullptr){
		q=q->next;
	}
	q->next = ptr; 
	return head; 
}
// Delete Head 
Node *deleteFirstNode(Node *head){
	if(head == nullptr){
		return nullptr;
	}
	else if(head->next == nullptr){
		delete head;
		return nullptr;
	}
	else{
		Node *newHead = head->next;
		delete head;
		return newHead;
	}
}
// Delete Tail
Node *deleteLastNode(Node *head){
	if(head == nullptr){
		return nullptr;
	}
	else if(head->next == nullptr){
		delete head;
		return nullptr;
	}
	else{
		Node *p = head; 
		Node *q = head->next;
		while(q->next != nullptr){
			p = p->next;
			q = q->next;
		}
		p->next = nullptr;
		delete q;
		return head; 
	}
}
int main(){
	Node *head = nullptr;
	head = insertAtHead(head,5);
	head = insertAtHead(head,0);
	head = insertAtTail(head,10);
	head = deleteFirstNode(head);
	head = deleteLastNode(head);
	print(head);
	return 0;
}