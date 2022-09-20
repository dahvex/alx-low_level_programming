#include "main.h"
#include "2-strlen.c"

/**
 * _strcpy - Copies a string pointed to by @src, 
 * including the terminating null byte, 
 * to a buffer pointed to by @dest.
 * @dest: A buffer to copy the string to.
 * @src: The source string to copy.
 *
 * Return: A pointer to the destination string @dest.
 */
char *_strcpy(char *dest, char *src)
{
	int index = 0;

	while (src[index])
	{
		index <= _strlen(src);
		dest[index] = src[index];
		index++;
	}

	return (dest);
}
