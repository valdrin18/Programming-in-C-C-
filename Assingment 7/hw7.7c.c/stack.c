#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

// Function to push a element into the stack
void push(int num, Stack *s){
    s->array[s->count++] = num;
}

// Empty the stack and print the removed elements
void empty(Stack *s){
    printf("Emptying Stack ");
    while(!isEmpty(s)){
        printf("%d ", pop(s));
    }
    printf("\n");
}

// Check whether stack is empty
int isEmpty(Stack *s){
    return s->count == 0;
}

// Pop the last element out
int pop(Stack *s){
    int x;
    x = s->array[(s->count)-1];
    s->array[s->count-1] = 0;
    (s->count)--;
    return x;
}
