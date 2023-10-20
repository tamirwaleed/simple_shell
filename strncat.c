#include "shell.h"
/**
 * *_strncat - copies string
 * @dest: string to be returned
 * @src: string to be copied
 * @n: bytes
 *Return: copied
 */
char *_strncat(char *dest, char *src, int n)
{
int i, j;
	char *s = dest;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	if (j < n)
		dest[i] = '\0';
	return (s);
}
