// Created by Hasin Al Farabi
// Created on 29.01.2022

// Functions :    
//
// ll_create() 
// ll_prepend()
// ll_append()
// ll_print()
// ll_size()
// ll_valuesearch()
// ll_removenode()
// ll_insertafter()
// 


#include<stdio.h>
#include<stdlib.h>
typedef struct node Node ;

struct node {
	int data ;
	Node *next ;
};
 

Node *ll_create(int item, Node *next){
	Node *new_node = (Node *)malloc(sizeof(Node)) ;
	if(new_node == NULL){
		printf("Error . Couldn't create a new node :( \n ") ;
		exit(1) ;
	}
	new_node->data = item ;
	new_node->next = next ;
	return new_node ;
}


Node *ll_prepend(Node *head, int item){
	Node *new_node = ll_create(item, head) ;
	return new_node ;
}


Node *ll_append(Node *head, int item){
	Node *new_node = ll_create(item, NULL) ;
	if(head == NULL)return new_node ;
	Node *current_node = head ;
	while(current_node->next != NULL){
		current_node = current_node->next ;
	}
	current_node->next = new_node ;
	return head ;
}


void ll_print(Node *head){
	Node *current_node = head ;
	while(current_node != NULL){
		printf("%d ",current_node->data) ;
		current_node = current_node->next ;
	}
	printf("\n");
	return ;
}


int ll_size(Node *head){
	Node *current_node = head ;
	int size = 0 ;
	while(current_node != NULL){
		current_node = current_node->next ;
		size++ ;
	}
	return size ;
}


Node *ll_valuesearch(Node *head, int value){
	Node *current_node = head ;
	while(current_node != NULL){
		if(current_node->data == value)return current_node ;
		current_node = current_node->next ;
	}
	return NULL ;
}


Node *ll_removenode(Node *head, Node *n){
	Node *current_node = head ;
	if(n == head)return head->next ;
	while(current_node->next != NULL){
		if(current_node->next == n){
			current_node->next = (current_node->next)->next ;
			return head;
		}
		current_node = current_node->next ;
	}
	return head ;
}


void ll_insertafter(Node *node, int value){
	Node *temp = ll_create(value,node->next) ;
	node->next = temp ;
	return ;
}


int main(){
  int value = 10 ;
  Node *head = ll_create(value, NULL) ;
	return 0 ;
}
