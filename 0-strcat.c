#include "shell.h"
/**
 * *_strcat - copies string
 * @dest: string to be returned
 * @src: string to be copied
 *Return: copied
 */
char *_strcat(char *dest, char *src)
{
char *ret = dest;

	while (*dest)
		dest++;
	while (*src)
		*dest++ = *src++;
	*dest = *src;
	return (ret);
}
