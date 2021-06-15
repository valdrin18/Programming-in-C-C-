/* CH-230-A
  A7.1(lanuage-C)
 Valdrin Smakaj
Vsmakaj@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

int main()
{
    //declared char and some variables
    char ch;
    int l=1;

    //declared list
    struct list* my_list = NULL;

    //made a continuous function
    while(l){
        scanf("%c",&ch);
        int n,m;
        //used switch for char cases
        switch (ch){

            case 'a':
                scanf("%d",&n);
                getchar();
                my_list=push_back(my_list,n);
                break;

            case 'b':
                scanf("%d",&m);
                getchar();
                my_list=push_front(my_list,m);
                break;

            case 'r':
                my_list=remove_first(my_list);
                break;

            case 'p':
                print(my_list);
                break;

            case 'q':
                dispose(my_list);
                l=0;
                break;
        }
    }
    return 0;
}
