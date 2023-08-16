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
tp = 1;

for (x = 1; x <= 50; x++)
{
t = t + tp;
printf("%i ,", t);
tp = t
}
printf("\n");
return (0);
}
