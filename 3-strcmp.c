#include "shell.h"
/**
 * _strcmp - compares
 * @s1: string 1
 * @s2: string 2
 *Return: difference
 */
int _strcmp(char *s1, char *s2)
{
while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	if (*s1 == *s2)
		return (0);
	else
		return (*s1 < *s2 ? -1 : 1);
}

