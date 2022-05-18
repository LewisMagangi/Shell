#include <stdio.h>

int main (char *argv[])
{
	int count;

	for (count = 1; argv[count] != NULL; count++)
	{
	        printf("argv[%d] = %s\n", count, argv[count]);
	}
	return (0);
}
