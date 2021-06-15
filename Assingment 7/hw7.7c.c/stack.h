//the if not def rule to check
#ifndef _STACK_H_
#define _STACK_H_
typedef struct stack {
unsigned int count;
int array[12]; // Container
} Stack;

//function section
void push(int, Stack*);
int pop(Stack*);
int isEmpty(Stack*);
void empty(Stack*);

#endif // _STACK_H_
