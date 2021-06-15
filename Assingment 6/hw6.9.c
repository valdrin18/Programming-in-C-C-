  /* CH-230-A
  A6.9(lanuage-C)
 Valdrin Smakaj
Vsmakaj@jacobs-university.de
*/


#include <stdio.h>
#include <stdlib.h>

//structed list
struct list {
    int info;
    struct list* next;
};

//code to put elements in beginning
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
//code to put elements in end
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
//code to get size of list
int size(struct list* my_list){

    int count=1;
    struct list* cursor;
    cursor=my_list;

    while(cursor->next != NULL){
        cursor=cursor->next;
        count++;
    }
    return count;
}

//code to add elements anywhere
struct list* add_el(struct list* my_list, int position, int value){
	int i;
	struct list *cursor, *newel, *cursor2;
	cursor = my_list;
	// Checking for negative position or larger than size positions
	if((position<0) || (position>size(my_list))){
		printf("Invalid position!\n");
		return my_list;
	}
	// Special case for adding the element in the beginning
	else if(position==0){
		return push_front(my_list, value);
	}
	// Normal case for adding an element
	else{
		// memory allocation for the new list of the element we want to add
		newel = (struct list*)malloc(sizeof(struct list));
		if(newel == NULL){
			printf (" Error allocating memory \n");
			return my_list;
		}

		newel->info = value;
		newel->next = NULL;
		// case when list has no element
		if(my_list == NULL)
			return newel;

		for(i=0; i<(position-1); i++){
			cursor = cursor->next;
		}
		// Inserting the element at the required position
		cursor2 = cursor->next;
		cursor->next = newel;
		newel->next = cursor2;

		return my_list;
	}
}
//code to reverse the elements
struct list* reverse(struct list* my_list){

    struct list *current,*previous,*nextt;
    current=my_list;
    previous=NULL;

    while(current!=NULL){

        nextt=current-> next;
        current->next=previous;
        previous=current;
        current=nextt;
    }
    my_list=previous;
    return my_list;
}
//code to remove the first element
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
//code to dispose the list
void dispose(struct list* my_list){

    struct list * n_ele;
    while(my_list!=NULL){
        n_ele=my_list->next;
        free(my_list);
        my_list=n_ele;
    }
}
//code to print the list
void print(struct list* my_list){

    struct list* pr;

    for(pr= my_list; pr; pr=pr->next){
        printf("%d ",pr->info);
    }
    printf("\n");
}
//main function
int main()
{
    //declared char and some variables
    char ch;
    int u=1;

    //declared list
    struct list* my_list = NULL;

    //made a continuous loop
    while(u){
        scanf("%c",&ch);
        int n,m,l,k;
        //made a switch to check char cases
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

            case 'i':
				scanf("%d%d", &l, &k);
				getchar();
				my_list = add_el(my_list, l, k);
				break;

			case 'R':
				my_list = reverse(my_list);
				break;

            case 'q':
                dispose(my_list);
                //break loop and end
                u=0;
                break;
        }
    }
    return 0;
}
