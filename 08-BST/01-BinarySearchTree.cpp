// 01-BinarySearchTree
#include<bits/stdc++.h>
using namespace std; 

// Structure for Binary Search Tree
struct Node{
	int data ;
	Node* right ;
	Node* left ;
	Node(int x){
		data = x; 
		left = right = nullptr;
	}
};

// Insert into BST :: RECURSIVE
// O(H) + O(H)
Node *insertBSTRecursive(Node *root , int data){
	if(root == nullptr){
		return new Node(data);
	}
	else if(data < root->data){
		// if data is less than root data 
		// need to insert in left subtree 
		root->left = insertBSTRecursive(root->left , data);
	}
	else if(data > root->data){
		// if data is greater than root data
		// need to insert in right subtree
		root->right = insertBSTRecursive(root->right,data);
	}
	else{
		// equal condition 
		// no need to insert if we already found
		return root; 
	}
}
// Insert into BST :: Iterative
// O(H) + O(1)
Node* insertBSTIterative(Node *root , int data){
	Node *ptr = new Node(data);
	Node *current = root , *parent = nullptr;
	while(current!=nullptr){
		parent = current;
		if(data < current->data){
			current = current->left;
		}
		else if(data > current->data){
			current = current->right;
		}
		else{
			// already found the same data
			return root;
		}
	}
	// now current is empty we need to insert 
	// node to left or right to the parent node 
	if(parent == nullptr){ // empty tree condition 
		return ptr; // 
	}
	else if(data < parent->data){
		parent->left = ptr; 
	}
	else{
		parent->right = ptr;
	}
}

// InOrder Successor
Node *getSuccessor(Node *current){
	current = current->right;
	while(current->left != nullptr){
		current = current->left;
	}
	return current;
}

// Delete from BST
// O(H) + O(H) 
Node *deleteFromBST(Node *root , int key){
	if(root == nullptr){
		return root; 
	}
	else if(key < root->data){
		root->left = deleteFromBST(root->left,key);
	}
	else if(key > root->data){
		root->right = deleteFromBST(root->right,key);
	}
	else{
		// we found 
		// if root has 0 or 1 child 
		if(root->left == nullptr){
			Node *r = root->right;
			delete root;
			return r; 
		}
		else if(root->right == nullptr){
			Node *l = root->left;
			delete root;
			return l;
		}
		else{
			// if we have two childrens
			// find inOrderPredecessor or InOrderSuccessor & replace 
			Node *succ = getSuccessor(root);
			root->data = succ->data; // copy data 
			// delete succ->data (successor value) from its right sub tree
			root->right = deleteFromBST(root->right,succ->data);
		}
	}
}

// Search :: Recursive 
// O(H) + O(H)
bool search(Node *root , int key){
	if(root == nullptr){
		return false; 
	}
	if(root->data == key){
		return true; 
	}
	else if(key < root->data){
		return search(root->left , key);
	}
	else{
		return search(root->right , key);
	}
}

// Search :: Iterative 
// O(H) + O(1)
bool searchIter(Node *root , int key){
	while(root != nullptr){
		if(root->data == key){
			return true; 
		}
		else if(key < root->data){
			root = root->left;
		}
		else{
			root = root->right;
		}
	}
	return false; 
}

int main(){

	Node *root = nullptr;

	return 0;
}