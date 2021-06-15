/* CH-230-A
  A7.p2 simple_arithmetics Compute Devision (lanuage-C)
 Valdrin Smakaj
Vsmakaj@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

//declared struct.
struct double_linked_list
{
	char c;
	struct double_linked_list *n;
	struct double_linked_list *p;
};

//defining functions
struct double_linked_list *push_front( struct double_linked_list *, char ch);
struct double_linked_list *remove_char (struct double_linked_list*, char ch);
void print_list(struct double_linked_list*);
void print_back(struct double_linked_list*);
void free_and_quit(struct double_linked_list* );

//removes all nodes with ch as a char
struct double_linked_list *remove_char (struct double_linked_list* my_list, char ch)
{
	int i = 0;
	struct double_linked_list *p = NULL, *n = NULL, *cursor;
	cursor = my_list;
	if(my_list == NULL)
		return my_list;
	while( cursor)
	{
		p = cursor->p;
		n = cursor->n;
		//if it is in the first value of the linked list
		if(p == NULL && (cursor->c == ch))
		{
			n->p = NULL;
			cursor->n = NULL;
			cursor = n;
			my_list = n;
			i++;
			continue;
		}
		//last value condition
		if(n == NULL && cursor->c == ch)
		{
			p->n = NULL;
			cursor->p = NULL;
			i++;
			break;
		}
		//other cases
		if(cursor->c == ch)
		{
			p->n = n;
			n->p = p;
			cursor = n;
			i++;
			continue;
		}

		cursor = cursor->n;
	}
	if(i==0)
		printf("%s\n", "The element is not in the list!");
	return my_list;
}

//code to put in the beginning elements
struct double_linked_list *push_front( struct double_linked_list * my_list, char ch)
{
	struct double_linked_list *newel;
	newel = (struct double_linked_list *) malloc(sizeof(struct double_linked_list));
	if(!newel)
		exit(0);
	if(my_list == NULL)
	{
		newel->c = ch;
		newel->n = NULL;
		newel->p = NULL;
		return newel;
	}
	newel->c = ch;
	newel ->p = NULL;
	newel->n = my_list;
	my_list->p = newel;
	return newel;
}

//frees the memory allocated by the list
void free_and_quit(struct double_linked_list* my_list)
{
	struct double_linked_list *elem;
	while(my_list!=NULL)
	{
		elem = my_list->n;
		free(my_list);
		my_list = elem;
	}
}
//function to print the list
void print_list(struct double_linked_list *my_list)
{
	struct double_linked_list* cursor;
	for(cursor = my_list; cursor; cursor = cursor->n)
	{
		printf("%c ", cursor->c);
	}
	printf("\n");
}
//code to print list backwards
void print_back(struct double_linked_list *my_list)
{
	struct double_linked_list *cursor;
	for(cursor = my_list; cursor; cursor = cursor->n){
		if(cursor->n == NULL)
			break;
	}
	for(; cursor; cursor = cursor->p)
		printf("%c ", cursor->c);
	printf("\n");
}

//main function
int main()
{
	char ch;
	int n, done = 0;
	struct double_linked_list *my_list = NULL;
	do
	{
		scanf("%d",&n);
		getchar();

		switch(n)
		{
			case 1:
				scanf("%c",&ch);
				my_list = push_front(my_list, ch);
				break;
			case 2:
				scanf("%c",&ch);
				my_list = remove_char(my_list, ch);
				break;
			case 3:
				print_list(my_list);
				break;
			case 4:
				print_back(my_list);
				break;
			case 5:
				free_and_quit(my_list);
				done = 1;
				break;
		}
	}while(!done);

	return 0;
}
