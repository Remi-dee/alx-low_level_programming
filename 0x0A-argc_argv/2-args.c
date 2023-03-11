#include <stdio.h>

/**
* main - This prints all arguments it has received
*@argc: this counts argument
*@argv: argument vector
*Return: returns 0
*/

int main(int argc, char *argv[])
{
		int i;

		for (i = 0; i < argc; i++)
			printf("%s\n", argv[i]);

		return (0);
}
