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
	//if empty 
	if(head == nullptr) return ;

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
	// if head is null 
	if(head == nullptr){
		ptr->next = ptr; // circular connect 
		return ptr; 
	}
	Node *temp = head; 
	while(temp->next != head){
		temp = temp->next; // traverse upto last element 
	}
	temp->next = ptr; 
	ptr->next = head; // circular connect
	return ptr; 
}

// Insert At Tail 
Node *insertAtTail(Node *head , int data){
	Node *ptr = new Node(data);
	if(head == nullptr){
		return ptr;
	}
	Node *q = head;
	while(q->next != head){
		q=q->next; // traverse upto last node 
	}
	q->next = ptr; 
	ptr->next = head; // circular connect 
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
		Node *temp = head; 
		while(temp->next != head){
			temp = temp->next; // traverse upto last node 
		}
		temp->next = newHead; // circular connect 
		delete head;
		return newHead; // newHead or temp->next 
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
		Node *p = head; 
		Node *q = head->next;
		while(q->next != head){
			p = p->next;
			q = q->next;
		}
		p->next = head;
		delete q;
		return head; 
	}
}
int main(){
	Node *head = nullptr;
	head = insertAtHead(head,5);
	// head = insertAtHead(head,0);
	// head = insertAtTail(head,10);
	// head = deleteFirstNode(head);
	head = deleteLastNode(head);
	print(head);
	return 0;
}