#include "my_strlen.h"
#include <stdio.h>

int my_strlen(const char *str)
{
	int nr = 0;
	while (*str != 0)
	{
		str++;
		nr++;
	}
	return nr;
}

