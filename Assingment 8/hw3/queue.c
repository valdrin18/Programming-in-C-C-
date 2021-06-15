#include <stdio.h>
#include <stdlib.h>

#include "queue.h"

static void copyN(Item item, Node *pn);
static void copyI(Node *pn, Item *pi);

//function to copy node
static void copyN(Item item, Node *pn)
{
	pn->item = item;
}
//function to copy item
static void copyI(Node *pn, Item *pi)
{
	*pi = pn->item;
}


void initialize_queue(Queue *pq)
{
	pq->front = pq->rear = NULL;
	pq->items = 0;
}

int queue_is_full(const Queue *pq)
{
	return pq->items == MAXQUEUE;
}

int queue_is_empty(const Queue *pq)
{
	return pq->items == 0;
}

int queue_item_count(const Queue *pq)
{
	return pq->items;
}

int enqueue(Item item, Queue *pq)
{
    // Queue is full case
    if (queue_is_full(pq)==1)
        return -1;
    Node *newnode;
    newnode = (Node*)malloc(sizeof(newnode));
    if(!newnode)
        exit(1);
    // copy item to the new node
    copyN(item, newnode);
    newnode->next = NULL;
    if(queue_is_empty(pq) == 1)
        pq->front = newnode;
    else
        (pq->rear)->next = newnode;
    pq->rear = newnode;
    pq->items++;
    // Successfully enqueued element to queue
    return 0;
}

int dequeue(Item *pitem, Queue *pq)
{
    //case if queue is empty
    if(queue_is_empty(pq) == 1)
        return -1;
    //declared new node
    Node *newnode;
    //copied the item we want to remove
    copyI(pq->front, pitem);
    newnode = pq->front;
    pq->front = (pq->front)->next;
    free(newnode);
    if(pq->items == 1){
        pq->rear = NULL;
    }
    //decreased size in items
    pq->items--;
    return 0;
}

//coed to empty queue
void empty_queue(Queue *pq)
{
	Item dummy;
	while (!queue_is_empty(pq)) {
		dequeue(&dummy, pq);
	}
}

//function to print
void printq(Queue *pq)
{

    Node *tmp = pq->front;
    while(tmp != NULL){
        printf("%d ", tmp->item);
        tmp = tmp->next;
    }
    printf("\n");
}
