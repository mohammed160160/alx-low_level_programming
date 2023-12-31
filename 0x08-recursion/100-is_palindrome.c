#include "main.h"
#include <stdio.h>

/**
 * is_palindrome - checks if a string is palindrome or not
 * @s: Pointer to the string
 * Return: Always 0.
 */


int is_palindrome(char *s)
{
int l1 = 0;
int l2 = 0;
int p = 0;

if (*s == '\0')
{
return (1);
}

l1 = palidromelength(s, l1);
l1 = l1 - 1;
p = palidromecheck(s, l1, l2);

return (p);
}

/**
 * palidromelength - finds the length of the string
 * @l: The length of the string
 * @s: Pointer to the string
 * Return: Always 0.
 */

int palidromelength(char *s, int l)

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

return (palidromelength(s, l));

}

/**
 * palidromecheck - checks if the string is palidrome or not
 * @l1: The last value of the string
 * @l2: The first value of the string
 * @s: The pointer at the string
 * Return: Always 1 if it's palidrome and 0 if not
 */

int palidromecheck(char *s, int l1, int l2)
{

if (*(s + l2) != *(s + l1))
{
return (0);
}

if (l1 == l2 || (l1 + 1) == l2)
{
return (1);
}
else
{
l1--;
l2++;
}

return (palidromecheck(s, l1, l2));
}
