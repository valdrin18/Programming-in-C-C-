/* CH-230-A
  A8.p1 Writing numbers (lanuage-C)
 Valdrin Smakaj
Vsmakaj@jacobs-university.de
*/

#include <stdio.h>

#include "queue.h"

//main func
int main()
{
	//declared item,temp
	Queue line;
	Item temp;
	char ch;

	initialize_queue(&line);

	//while loop until it reaches end of file
	while (((ch = getchar()) != EOF) && (ch != 'q'))
	{
		//switchcase for characters
		switch (ch)	{
			case 'a':
				printf("add int: ");
				scanf("%d", &temp);
				if (!queue_is_full(&line))
				{
					printf("Putting %d into queue\n", temp);
					enqueue(temp, &line);
				}
				else
					puts("Queue is full");
				break;

			case 'd':
				if (queue_is_empty(&line))
					puts("Nothing to delete!");
				else
				{
					dequeue(&temp, &line);
					printf("Removing %d from queue\n", temp);
				}
				break;

        case 'p':
            printf("content of the queue: ");
            printq(&line);
            break;

			default:
				printf("%d items in queue\n", queue_item_count(&line));
				puts("Type a to add, d to delete, p to print, q to quit:");
		}
	}

    empty_queue(&line);
    puts("Bye.");
    return 0;
}