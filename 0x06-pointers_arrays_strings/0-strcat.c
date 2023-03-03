#include "main.h"


char *_strcat(char *dest, char *src)
{
	char *temp = dest;
		/*Adding the while loop*/
	while (*dest)
		dest++;

	while (*src)
		*dest++ = *src++;

	*dest = '\0';
	return (temp);
}
