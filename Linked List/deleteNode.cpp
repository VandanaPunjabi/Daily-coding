#include<bits/stdc++.h>
using namespace std;


struct node{
	int data;
	node *next;
};

void push(node **head_ref, int ndata){
	
     node *nnode = new node();
     nnode->data = ndata;
     nnode->next = *head_ref;
     *head_ref = nnode;
}

void InsertAfter(node *prev_node, int ndata){
	
	node *node1 = new node();
	node1->data = ndata;
	node1->next = prev_node->next;
	prev_node->next = node1;
}

void insertEnd(node **head_ref, int nData){
	
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

void deleteNode(node **head_ref , int key){
	
	node *prev , *temp;
	
	//store head_ref in temp
	temp = *head_ref;
	
	//if key is present in head
	if(temp!=NULL && temp->data==key){
		*head_ref = temp->next;
		free(temp);
		return;
	}
	 
	//if key is not in head we traverse the whole linked list 
	while(temp!=NULL && temp->data!=key){
		prev = temp;
		temp = temp->next;
	}
	
	//if key is not present after traverse the whole LL
	if(temp==NULL){
		return;
	}
	
	//if get the key
	prev->next = temp->next;
	free(temp);
}

void display(node *head){
	
	while(head!=NULL){
		
		cout<<head->data<<endl;
		head = head->next;
	}
}
int main(){
	
	node *node1 = NULL;
//	node1->next=  NULL;
	
	push(&node1,6);
	push(&node1,8);
	push(&node1,12);
	InsertAfter(node1->next, 70);
	push(&node1,45);
	insertEnd(&node1, 60);
	
	deleteNode(&node1, 45);
	
	display(node1);
	
	return 0;
}
