/* CH-230-A
  A7.1(lanuage-C)
 Valdrin Smakaj
Vsmakaj@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

//code to add elements in beginning
struct list* push_front(struct list* my_list , int value){

    struct list* newel;
    newel=(struct list*)malloc(sizeof(struct list));

    if (newel==NULL){
        printf("Error allocating memory\n");
        return my_list;
    }
    newel->info=value;
    newel-> next=my_list;
    return newel;
}

//code to add elements in the end
struct list* push_back(struct list* my_list, int value){

    struct list* cursor, *newel;
    cursor= my_list;
    newel=(struct list*)malloc(sizeof(struct list));

    if (newel==NULL){
        printf("Error allocating memory\n");
        return my_list;
    }

    newel->info=value;
    newel->next=NULL;
    if (my_list==NULL){
        return newel;
    }

    while(cursor->next!=NULL){
        cursor=cursor->next;
    }
    cursor->next=newel;
    return my_list;
}

//code to remove fist element
struct list* remove_first(struct list *my_list){

    if (my_list==NULL){
        return my_list;
    }

    struct list* new_list;
    new_list=(my_list->next);
    free(my_list);
    my_list=new_list;

    return my_list;
}

//code to dispose elements
void dispose(struct list* my_list){

    struct list * n_ele;
    while(my_list!=NULL){
        n_ele=my_list->next;
        free(my_list);
        my_list=n_ele;
    }
}

//code to print elements of list
void print(struct list* my_list){

    struct list* pr;

    for(pr= my_list; pr; pr=pr->next){
        printf("%d ",pr->info);
    }
    printf("\n");
}
