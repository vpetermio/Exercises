#include "my_strcpy.h"
#include <stdio.h>

char* my_strcpy(char *a, const char *b)
{
	char *temp = a;
	while (*b != '\0')
	{
		*a = *b;
		a++;
		b++;
	}
	*a = *b;
	return *temp;
}

//another way

/*
char *my_strcpy(char *dest, const char *src)
{
int i=0;
while*src[i]!=0)
{
dest[i]=src[i];
i++;
}
dest[i]=src[i];
return dest;
}/*/