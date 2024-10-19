// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
}Node;



void printStack(struct Node* stack){
    struct Node* current = stack;
    
    while(current != NULL){
    printf("[%d]\n", current -> data);
    current = current -> next;
    }
    printf("NULL\n");
    
}


void pop(struct Node** stack){
    struct Node* current = *stack;
    if(current != NULL){
        current = current -> next;
        *stack = current;
        current = NULL;
        free(current);
    }
    else{
        printf("can not pop element, stack is empty :( \n");
    }
}


void push(struct Node** stack, int n){
    struct Node* new_node = malloc(sizeof(struct Node));
    new_node -> data = n;
    new_node -> next = *stack;
    *stack = new_node;
}


int main() {
     struct Node* stack = NULL;
    push(&stack, 10);
    push(&stack, 99);
    push(&stack, 1);
    push(&stack, 50);
    push(&stack, 1000);
    printStack(stack);
    printf("\n");
    
    pop(&stack);
    
    printStack(stack);
    
    free(stack);
    
    //printf("Try programiz.pro");

    return 0;
}
