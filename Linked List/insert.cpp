#include<bits/stdc++.h>
using namespace std;

struct node {
	int data;
	node *next;
};

node *push(node *head, int dataN){
	
	node *head1 = new node();
	head1->data= dataN;
	head1->next = head;
	head = head1;
	return head1;
}

void push1(node **head, int datad){
	node *newData = new node();
	newData->data = datad;
	newData->next = *head;
	*head = newData;
	
}

void print(node *head){
	while(head!=NULL){
		cout<<head->data<<endl;
		head = head->next;
	}
	
}

void insertAfter(node *prev_node, int data){
	node *newNode = new node();
	newNode->data = data;
	newNode->next = prev_node->next;
	prev_node->next = newNode;
}

void append(node **head_ref, int nData){
	node *newNode = new node();
	
	newNode->data = nData;
	newNode->next=NULL;
	
	node *last = *head_ref;
	
	if(*head_ref==NULL){
		*head_ref = newNode;
		return;
	}
	
	while(last->next !=NULL){
		last = last->next;
	}
	
	last->next = newNode;
	return;
	
}

int main(){
	
	node *head = NULL;
	
	head = push(head , 9);
	push1(&head, 7);
	push1(&head, 6);
	push1(&head,57);
	insertAfter(head->next , 10);
	
		append(&head, 90);
		
	print(head);
	return 0;
	
}
