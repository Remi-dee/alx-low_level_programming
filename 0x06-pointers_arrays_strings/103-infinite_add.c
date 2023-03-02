#include "main.h"
/**
 * infinite_add - Adds two numbers.
 *
 * @n1: The first number to add.
 * @n2: The second number to add.
 * @r: The buffer that will store the result.
 * @size_r: The buffer size.
 *
 * Return: A pointer to the result.
 *         0 if the result can not be stored in r.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = 0, len2 = 0, i = 0, j = 0, carry = 0, sum = 0;

	while (n1[len1] != '\0')
		len1++;
	while (n2[len2] != '\0')
		len2++;

	if (len1 >= size_r || len2 >= size_r)
		return (0);

	r[size_r - 1] = '\0';

	for (i = len1 - 1, j = len2 - 1; i >= 0 || j >= 0; i--, j--)
	{
		sum = carry;
		if (i >= 0)
			sum += n1[i] - '0';
		if (j >= 0)
			sum += n2[j] - '0';
		if (sum > 9)
		{
			carry = 1;
			sum -= 10;
		}
		else
		{
			carry = 0;
		}
		r[size_r - 2 - (i > j ? i : j)] = sum + '0';
	}
	if (carry)
	{
		if (size_r < 2)
			return (0);
		r[0] = carry + '0';
		return (r);
	}
	else
	{
		return (r + (size_r - 1 - (i > j ? i : j)));
	}
}

