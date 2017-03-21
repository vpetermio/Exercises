#include "my_strdup.h"
#include "my_strlen.h"
#include "my_strcpy.h"
#include <stdio.h>
#include <stdlib.h>

char *my_strdup(const char *str1)
{
	char *dest = (char*)malloc((my_strlen(str1) + 1) * sizeof(char));
	if (dest != 0)
	{
		my_strcpy(dest, str1);
	}
	return dest;
}