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

// Insert At Position 
Node *insertAtPosition(Node *head , int position , int data){
	// New Node Creation 
	Node *ptr = new Node(data);
	// if position is 1 
	if(position == 1){
		ptr->next = head;
		return ptr; 
	}
	Node *current = head; 
	// traverse upto position-2 and insert between current & its next 
	for(int i=1 ; i<=position-2 ; i++){
		current = current->next;
	}	
	// if we reach out of bound 
	if(current == nullptr){
		delete ptr; 
		return head; 
	}
	// insert between current and its next
	ptr->next = current->next;
	current->next  = ptr; 
	return head; 
}
// Delete At Position 
Node *deleteAtPosition(Node *head , int position){
	// if position is 1 
	if(position == 1){
		Node *newHead = head->next;
		delete head;
		return newHead;
	}
	Node *current = head; 
	for(int i=1 ; i<=position-2 ; i++){
		current = current->next;
	}
	if(current == nullptr){
		return head;
	}
	Node *temp = current->next;
	current->next = temp->next; // skip & connect 
	delete temp;
	return head; 
}

// Reverse Singly Linked List :: Iterative
Node *reverse(Node *head){
		Node *prev = nullptr,*next = nullptr;
		Node *current = head;
		while(current != nullptr){
			next = current->next;
			current->next = prev;
			prev = current;
			current = next;
		}
		return prev;
}

// Reverse Singly Linked List :: Recursive 
Node *reverse(Node *current , Node *prev){ // previous is initially nullptr
	if(current == nullptr) return prev; 
	Node *next = current->next; 
	current->next = prev; 
	return reverse(next,current);
}


int main(){
	Node *head = nullptr;
	head = insertAtHead(head,5);
	head = insertAtHead(head,0);
	head = insertAtTail(head,10);
	head = insertAtTail(head,15);
	head = insertAtTail(head,20);
	head = insertAtTail(head,25);
	// head = deleteFirstNode(head);
	// head = deleteLastNode(head);
	// head = insertAtPosition(head,5,22);
	// head = deleteAtPosition(head,4);
	print(head);
	head = reverse(head,nullptr);
	print(head);
	return 0;
}