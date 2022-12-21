#include<iostream>
#include <queue>
using namespace std;

// Structure for Nodes 
struct Node{
	int data; 
	Node *left;
	Node *right;
	Node(int x){
		data = x; 
		left = nullptr;
		right = nullptr;
	}
};

// Pre Order 
// root - left - right 
void preOrder(Node *root){
	if(root == nullptr) return;
	cout<<root->data<<" ";
	preOrder(root->left);
	preOrder(root->right);
}

// In Order 
// left - root - right 
void inOrder(Node *root){
	if(root == nullptr) return;
	inOrder(root->left);
	cout<<root->data<<" ";
	inOrder(root->right);
}

// Post Order
void postOrder(Node *root){
	if(root == nullptr) return;
	postOrder(root->left);
	postOrder(root->right);
	cout<<root->data<<" ";
}

// Level Order Traversal 
// Level By Level 
void levelOrder(Node *root){
	if(root == nullptr) return;
	queue<Node*>q;
	q.push(root);
	while(!q.empty()){
		int size = q.size();
		for(int i=0 ; i<size ; i++){
			Node *current = q.front();
			cout<<current->data<<" ";
			q.pop();
			if(current->left != nullptr){
				q.push(current->left);
			}
			if(current->right != nullptr){
				q.push(current->right);
			}
		}
		cout<<endl;
	}
}