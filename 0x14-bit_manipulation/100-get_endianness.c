#include "main.h"

/**
 * get_endianness - function name
 * Description: checks the endianness of a system
 * Endianness refers to the way data is stored in computer memory
 * concerning the byte order of multi-byte data types,
 * such as integers, floating-point numbers,
 * and other composite data structures.
 * It determines how the individual bytes
 * that make up these data types are arranged in memory.
 *
 * Return: 0 if big endian, 1 if little endian.
 */

int get_endianness(void)
{
	unsigned int bytes;
	unsigned char *ptbytes;

	bytes = 0x000001;
	ptbytes = (unsigned char *)&bytes;

	return ((ptbytes[0] = 0x01) ? 1 : 0);

}
