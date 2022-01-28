// Created by Hasin Farabi
// Created on 28/01/2022


// Functions : 
//  enqueue()       to enqueue 
//  dequeue()       to dequeue 
//  printqueue()    to print the queue 


#include<stdio.h>
#define q_size 5 

typedef struct{
	int data[q_size+1] ;
	int head, tail ;
}Queue ;

void enqueue(Queue *q, int item){
	if((q->tail+1)%(q_size+1) == q->head){
		printf("Sorry the queue is full :( \n") ;
		return ;
	}
	q->data[q->tail] = item ;
	q->tail++;
}

void dequeue(Queue *q){
	if(q->tail == q->head){
		printf("Sorry the queue is empty :(\n ") ;
		return ;
	}
	q->head++;
}

void printqueue(Queue *q){
	int item, thead = q->head, ttail = q->tail ;
	for(;(thead%(q_size+1)) != ttail;thead++){
		item =  q->data[thead] ;
		printf("%d ",item) ;
	}
	printf("\n") ;
	return ;
}

int main()
{
	Queue my_queue ;
	my_queue.head = 0 ;
	my_queue.tail = 0 ;
	return 0 ;
}
