#include<bits/stdc++.h>
using namespace std;


class Node{
	public:
		int data;
		Node* next;
		
		//constructor
	Node(int data){
		this -> data = data;
		this -> next = NULL;
	}
	
};

void insertatHead(Node* &head, int d){
	
	Node* temp = new Node(d);
	temp -> next = head;
	head = temp;
	
}

void insertatTail(Node* &tail, int d){
	
	Node* temp = new Node(d);
	tail -> next = temp;
	tail = tail -> next;
	
	
}

void insertatMiddle(Node* &head,int pos, int d){
	
	Node* temp = head;
	int cnt = 1;
	
	while(cnt < pos-1){
		temp = temp->next;
		cnt++;
	}
	
	
	Node* nodeto = new Node(d);

   nodeto -> next = temp -> next;
   temp->next = nodeto;
	
	
}
void print(Node* &head ){
	
	Node* temp = head;
	while(temp!=NULL){
		
		cout<< temp -> data <<" ";
		temp = temp -> next;
	}
	
	cout<<endl;
}


int main(){
//	
	Node* node1 = new Node(10);
	
//
  Node* head = node1;
   Node* tail = node1;
//    
   print(head);
//    
  insertatHead(head, 19);
  print(head);
//    
//     
   insertatTail(tail, 12);
 print(head);
//    
 insertatTail(tail, 115);
    print(head);
//    
insertatMiddle(head,3,22);
	print(head);
//	
}









