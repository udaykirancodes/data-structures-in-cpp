#include<bits/stdc++.h>
using namespace std; 

#include<list>

int main(){
	list<int>l;
	l.push_back(1);
	l.push_back(2);
	l.push_front(0);
	// l.pop_back();
	// l.pop_front();
	cout<<"Size : "<<l.size()<<endl;  
	cout<<"is Empty : "<<l.empty()<<endl;
	cout<<"Front : "<<l.front()<<endl;
	cout<<"Back  : "<<l.back()<<endl;
	cout<<"List : ";
	for(auto x : l){
		cout<<x<<", ";
	}

	return 0;
}