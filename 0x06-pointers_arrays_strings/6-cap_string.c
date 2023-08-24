#include "main.h"
#include <stdio.h>

/**
 * *cap_string - Turns the start of all words in a sentence into capital
 * @str: The pointer that is used
 * Return: The pointer used
 */

char *cap_string(char *str)
{
int x;

x = 0;

while (str[x] != '\0')
{
if (str[x] == ' ' || str[x] == '\n' || str[x] == '\t' || str[x] == ','
|| str[x] == ';' || str[x] == '.' || str[x] == '!' || str[x] == '?'
|| str[x] == '"' || str[x] == '(' || str[x] == ')' || str[x] == '{'
|| str[x] == '}')

{

if (str[x + 1] >= 'a' && str[x + 1] <= 'z')
{
str[x + 1] -= 32;
}

}
x++;
}
return (str);
}
