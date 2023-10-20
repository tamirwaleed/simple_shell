#include "shell.h"
/**
 * _strdup - returns a pointer
 * @str: string
 * Return: pointer or NULL
 */
char *_strdup(const char *str)
{
int length = 0;
	char *ret;

	if (str == NULL)
		return (NULL);
	while (*str++)
		length++;
	ret = malloc(sizeof(char) * (length + 1));
	if (!ret)
		return (NULL);
	for (length++; length--;)
		ret[length] = *--str;
	return (ret);
}
