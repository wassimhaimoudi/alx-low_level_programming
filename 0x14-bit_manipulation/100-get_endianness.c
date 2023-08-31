#include "main.h"

/**
 * get_endianness - function that checks the endinness
 *
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	unsigned int bytes;
	unsigned char *ptr;

	bytes = 0x00000001;
	ptr = (unsigned char *)&bytes;

	return ((ptr[0] == 0x01) ? 1 : 0);
}
