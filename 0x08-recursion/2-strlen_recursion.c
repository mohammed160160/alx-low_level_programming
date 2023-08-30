#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - finds the length of a string
 * @s: The string in question
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
int l = 0;

l = findlength(s, l);
return (l);
}


/**
* findlength - calculates the length of a string of text
* @s: The string in question
* @l: The length of the string
* Return: The value of root
*/

int findlength(char *s, int l)
{

if (*s == '\0')
{
return (l);
}

if (*s != '\0')
{
l++;
s++;
}

return (findlength(s, l));
}
