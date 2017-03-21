#include "list.h"
#include <stdio.h>

int main(void)
{
	int a = 2;
	int b = 3;
	int c = 4;
	int d = 5;
	add_item(a);
	add_item(b);
	add_item(c);
	add_item(d);
	remove_item(b);
	toString();
	printf("Nr. of items: %d\n", no_of_items());
}