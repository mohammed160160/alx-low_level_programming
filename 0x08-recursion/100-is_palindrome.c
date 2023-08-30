#include "main.h"
#include <stdio.h>

/**
 * is_palindrome - checks if a string is palindrome or not
 * @s: Pointer to the string
 * Return: Always 0.
 */


int is_palindrome(char *s);
{
int l1 = 0;
int l2 = 0;
int p = 0;


l1 = palidromelength(s, l1);
l1 = l1 - 1;
p = palidromecheck(s, l1, l2);

return (p);
}

/**
 * lengthforrev - finds the length of the string
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
 * Return: Always 1 if it's palidrome and 0 if not
 */

int palidromecheck(char s, int l1, int l2)
{

if ( l1 = l2 ||     )
{
return (1)
}


if ( *(s+l1) != *(s+l2) )




return (palidromecheck(s, l1, l2))
}
