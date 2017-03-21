#include "list.h"
#include <stdio.h>

typedef struct node_t {
	void *content;
	struct node_t *next;
}node_t;

//First way, when head is a node_t type
/*
static node_t head = NULL;
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
*/
//Second way, when head is a pointer to node_t

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
}

int no_of_items()
{
	return count;
}

int remove_item(void *item)
{
	get_item(item);
	count--;
	return count;
}

void *get_item(void *item)
{
	static node_t *pa = NULL;
	static node_t *pb = NULL;
	pa = head->next;
	pb = head->next;
	if (pa->content == item)
	{
		head->next = pa->next;
		return pa;
	}
	else
	{
		pa = pa->next;
		if (pa->content == item)
		{
			pb->next = pa->next;
			return pa;
		}
	}
		return NULL;
}

void toString()
{
	node_t *current = head;

	while (current!= NULL)
	{
		printf("%d\n", current->content);
		current = current->next;
	}
}
