#include "shell.h"
/**
 * *_strchr - locates
 * @s: array
 * @c: to be located
 * Return: dest
 */
char *_strchr(char *s, char c)
{
while (*s++ != '\0')
{
	if (*s == c)
			return (s);
}
return (NULL);
}
