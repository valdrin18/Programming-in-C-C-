//func declarations and body fillings there
#include <stdio.h>
#include <stdlib.h>

#include "queue.h"

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

static void copyNode(Item item, Node *a);
// static void copy_to_item(Node *a, Item *pi);

int enqueue(Item item, Queue *pq)
{
    // Queue is full case
    if (queue_is_full(pq)==1)
        return 0;

    //decalred new node
    Node *node2;
    node2 = (Node*)malloc(sizeof(node2));

    //checked as always for memory allocation if null
    if(!node2){
        exit(1);
    }

    //copied the new created node to item
    copyNode(item, node2);
    node2->next = NULL;

    //checked if empty
    if(queue_is_empty(pq) == 1){
        pq->front = node2;
    }
    //the else case
    else{
        (pq->rear)->next = node2;
    }
    //did the rest as required from problem
    pq->rear = node2;
    pq->items++;
    free(node2);
    return 0;
}

int dequeue(Item *pitem, Queue *pq)
{
    //checked if queue is empty
    if(queue_is_empty(pq) == 1){
        return -1;
    }
    //decalred node and also saved value in pitem
    Node *n;
    *pitem=pq->front->item;

    //set to front and moved it,freed the node after
    n=pq->front;
    pq->front=pq->front->next;
    free(n);

    //if empty,follow conditions
    if(queue_is_empty(pq)==1){

        pq->rear=NULL;
        pq->front=NULL;

    }
    //items are decreased by 1
    pq->items--;
    return 0;
}
//func for empty queue
void empty_queue(Queue *pq)
{
	Item dummy;
	while (!queue_is_empty(pq)) {
		dequeue(&dummy, pq);
	}
}
//copy node func
static void copyNode(Item item, Node *a)
{
	a->item = item;
}
