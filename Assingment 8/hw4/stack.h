/* CH-230-A
  A8.p4 simple_arithmetics Compute Devision (lanuage-C)
 Valdrin Smakaj
Vsmakaj@jacobs-university.de
*/

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
void binary(Stack*,unsigned int );

#endif // _STACK_H_
