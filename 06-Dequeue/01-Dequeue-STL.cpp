#include<bits/stdc++.h>

#include<deque>

using namespace std; 

int main(){

	// Dequeue Init 
	deque<int> dq;

	// Insert At Front 
	dq.push_front(5);

	// Insert At End 
	dq.push_back(10);

	// Delete Front 
	dq.pop_front();

	// Delete Last 
	dq.pop_back();

	// Traverse
	for(auto x : dq){
		cout<<x<<" ";
	}
	// Dequeue Front Item
	int f = dq.front();

	// Dequeue Rear Item
	int r = dq.back();

	// size 
	int s = dq.size();

	// Begin Iterator 
	auto it = dq.begin();

	// Rear Iterator
	auto it2 = dq.end();
	
	return 0;
}