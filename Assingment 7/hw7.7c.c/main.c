/* CH-230-A
  A7.p7 simple_arithmetics Compute Devision (lanuage-C)
 Valdrin Smakaj
Vsmakaj@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

int main()
{
    Stack s;
    s.count = 0;
    int num, l=1;
    char c;
    while(((c = getchar()) != EOF) && (l==1)){

        switch(c){
            case 's':
            	// Push an element into the stack
                if(s.count < 12){
                    scanf("%d", &num);
                    getchar();
                    push(num,&s);
                    printf("Pushing %d\n", num);
                }else{
                    printf("Pushing Stack Overflow\n");
                }
                break;
            case 'p':
            	// Pop the last entered element out of the stack
                if(s.count>0){
                    printf("Popping %d\n", pop(&s));
                }else{
                    printf("Popping Stack Underflow\n");
                }
                break;
            case 'e':
            	// Empty the stack
                empty(&s);
                break;
            case 'q':
            	// Quit the loop execution
                printf("Quit\n");
                l=0;
                break;
        }
    }

    return 0;
}
