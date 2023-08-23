#include "main.h"
#include <stdio.h>

/**
 * *cap_string - Turns the start of all words in a sentence into capital
 * @'': The pointer that is used
 * Return: The pointer used
 */

char *cap_string(char *)
{
int x;

x = 0;

while (''[x] != '\0')
{
        if (''[x] >= 'a' && ''[x] <= 'z')
        {
        ''[x] -= 32;
        x++;
        }
}
return ('');
}
