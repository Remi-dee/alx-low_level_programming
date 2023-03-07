#include "main.h"
/**
 * memset - a function that fills memory with constant 


char *_memset(char *s, char b, unsigned int n)
{
	char *start = s;

	while (n--)
	{
		*s = b;
		s++;
	}
	return (start);
}
