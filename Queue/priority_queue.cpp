#include<bits/stdc++.h>
using namespace std;


void show(priority_queue<int>pq){
	
	while(!pq.empty()){
		cout<<pq.top()<<" ";
		pq.pop();
		
	}
}

int main(){
	
	priority_queue<int>q;
	q.push(10);
	q.push(9);
	q.push(-1);
	
	show(q);
}
