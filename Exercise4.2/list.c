#include "list.h"
#include <stdio.h>

typedef struct node_t {
	void *content;
	struct node_t *next;
}node_t;

//First way, when head is a node_t type

node_t head = NULL;
static int count = 0;

int add_item(void *item)
{
	int temp = count;
		node_t *node = (node_t *)malloc(sizeof(node_t));
		node->content = item;
		node->next = head.next;
		head.next = node;
		count++;

		if (temp+1 == count)
		{
			return 0;
		}
		else 
		{
			return -1;
		}
}

/*Second way, when head is a pointer to node_t

static node_t *head = NULL;
static int count = 0;

int add_item(void *item)
{
int temp = count;
	node_t *node = (node_t *)malloc(sizeof(node_t));
	node->content = item;
	node->next = head;
	head = node;
	count++;

	if (temp+1==count)
	{
		return 0;
	}
	else 
	{
		return -1;
	}
}*/

int get_nr_of_items
{
	return count;
}

int remove_item(void *item)
{
	return;
}