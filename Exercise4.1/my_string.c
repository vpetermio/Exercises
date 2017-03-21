
#include "my_string.h"

int my_strdiff(char* a, char* b)
{
	/*char arr1[] = "Hello World";
	char arr2[] = "Hello World";
	a = arr1;
	b = arr2;*/
	int n = 0;
	while (*a != '\0' || *b != '\0')
		//for (int i = 0; i<sizeof(a); i++)
		
		{
		if (*a == *b)
		{
			a++;
			b++;
			n++;
		}
		else
			return n;
		}
		return -1;
	}
