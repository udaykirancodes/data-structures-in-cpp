// BinaryTree
#include<iostream>
#include<queue>
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

// Build Tree 
Node *buildTree(Node *root){
	cout<<"Enter Data : "<<endl; 
	int data; 
	cin>>data; 
	if(data == -1) return nullptr; 
	root = new Node(data); 
	cout<<"Enter Data for Left of : "<<data<<endl;
	root->left = buildTree(root->left); 
	cout<<"Enter Data for Right of : "<<data<<endl;
	root->right = buildTree(root->right);
	return root;  
}

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
int main(){
	// Node *root = nullptr;

	Node *root = buildTree(root);

	levelOrder(root);

	return 0;
}