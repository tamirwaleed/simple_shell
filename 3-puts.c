#include "shell.h"
/**
 * _puts - prints
 * @str: string to be typed
 * Return: void
 */
void _puts(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
_putchar(str[i]);
_putchar('\n');
return;
}
