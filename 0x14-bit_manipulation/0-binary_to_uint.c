#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @B: string containing the binary number
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *B)
{
	int i;
	unsigned int dec_val = 0;

	if (!B)
		return (0);

	for (i = 0; B[i]; i++)
	{
		if (B[i] < '0' || B[i] > '1')
			return (0);
		dec_val = 2 * dec_val + (B[i] - '0');
	}

	return (dec_val);
}
