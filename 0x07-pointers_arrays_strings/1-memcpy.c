#include "main.h"

/**
 * _memcpy - a function that copys memory area
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *start = dest;

	while (n--)
	{
		*dest = *src;
		src++;
		dest++;
	}

	return(start);
}
