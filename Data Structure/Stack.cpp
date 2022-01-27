// Created by Hasin Farabi
// Created on 27/01/2023


// Functions : 
//  stack_push()     to push a item on end of the stack 
//  stack_pop()      to pop the top item of stacck 
//  stack_print()    to print the stack 

#include<bits/stdc++.h>
using namespace std ;
#define str_max 100

typedef struct{
    int top ;
    int data[str_max] ;
}Stack ;

void stack_push(Stack *s, int item){
    if(s->top < str_max){
        s->data[s->top] = item ;
        s->top++ ;
        return ;
    }
    printf("Sorry the stack is full :) \n") ;
    return ;
}

void stack_pop(Stack *s){
    if(s->top == 0){
        printf("Sorry the stack is empty :) \n") ;
        return ;
    }
    s->top-- ;
}

void stack_print(Stack *s){
    for(int i = s->top-1;i >= 0;i--){
        printf("%d ",s->data[i]) ;
    }
    printf("\n") ;
}

int main()
{
    Stack my_stack ;
    my_stack.top = 0 ;

    // some operation for example : 
    int item = 5 ;
    stack_push(&my_stack, item) ;
    item = 4 ;
    stack_push(&my_stack, item) ;
    item = 5 ;
    stack_push(&my_stack, item) ;

    stack_print(&my_stack) ;

    stack_pop(&my_stack) ;
    stack_pop(&my_stack) ;
    stack_pop(&my_stack) ;

    stack_print(&my_stack) ;

    return 0 ;
}
