#include<stdio.h>
/**
 * main - writes the first 50 values of fibonacci sequence
 * Return: 0
 */
int main(void)
{
int x;
int t;
int pt;

t = 0;
pt = 1;

for (x = 1; x <= 50; x++)
{
t = t + pt;
printf("%i ,", t);
pt = t;
}
printf("\n");
return (0);
}
