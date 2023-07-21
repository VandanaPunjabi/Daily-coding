#include<bits/stdc++.h>
using namespace std;

struct node{
	int data;
	node *next;
	node *prev;
};

void display(node *head){
	while(head!=NULL){
		cout<<head->data<<" ";
		head = head->next;
	}
}

void addFirst(node **head_ref, int ndata){
	
	node *node1 = new node();
	
	node1->data = ndata;
	node1->next = *head_ref;
	node1->prev = NULL;
	
	*head_ref = node1;
}

void addAfter(node *head, int ndata){
	node *node1 = new node();
	
	node1->data = ndata;
	node1->next = head->next;
	
	node1->prev = head;
	head->next = node1;
	
	if(head->next != NULL){
		node1->next->prev = node1;
	}
}

int main(){
	node *head = NULL;
	
	addFirst(&head, 7);
	addFirst(&head, 2);
	addFirst(&head, 3);
	addAfter(head, 10);
	
	display(head);
	
	return 0;
}
