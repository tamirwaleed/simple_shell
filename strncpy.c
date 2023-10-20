#include "shell.h"
/**
 * *_strncpy - copies string
 * @dest: string to be returned
 * @src: string to be copied
 * @n: bytes
 *Return: copied
 */
char *_strncpy(char *dest, char *src, int n)
{
int i, j;
	char *s = dest;

	i = 0;
	while (src[i] != '\0' && i < n - 1)
	{
		dest[i] = src[i];
		i++;
	}
	if (i < n)
	{
		j = i;
		while (j < n)
		{
			dest[j] = '\0';
			j++;
		}
	}
	return (s);
}
