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
//binary function
void binary(Stack *s,unsigned int n){
    int i;
    unsigned int b[500];
    if(n==0){
        push(n,s);
    }
    //made condition and saved in array remainders
    //to print them as binary in the end
    while(n>0){
        b[i]=n%2;
        push(b[i],s);
        n=n/2;
        i++;
    }
}





