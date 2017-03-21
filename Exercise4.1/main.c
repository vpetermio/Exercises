#include <stdio.h>
#include "my_string.h"
#include "my_strlen.h"
#include "my_strcpy.h"

int main(void)
{
	char arr1[] = "Hello World";
	char arr2[] = "Hello World";
	char* a = arr1;
	char* b = arr2;
	printf("%d \n", my_strdiff(a,b));
	
	char arr[] = "Hello";
	char *c = arr;
	printf("%d \n", my_strlen(c));

	char arr3[] = "A";
	char arr4[] = "f";
	printf("%c \n", my_strcpy(arr4, arr3));
	

	char arr5[] = "hello";
	char *x = my_strdup(arr5);
	int length = my_strlen(arr5);
	while (length != 0)
	{
		printf("%c", *x);
		x++;
		length--;
	}
	free(*x);

}

