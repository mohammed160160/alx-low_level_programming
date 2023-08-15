#include<stdio.h>
/**
 * main - writes the first 50 values of fibonacci sequence
 * Return: 0
 */
int main(void)
{
int x;
int t;

t = 0;

for (x = 1; x <= 50; x++)
{
t = t + x;
printf("%i ,", t);
}
printf("\n");
return (0);
}
