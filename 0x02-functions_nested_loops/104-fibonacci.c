#include<stdio.h>
/**
 * main - writes the first 98 values of fibonacci sequence
 * Return: 0
 */
int main(void)
{
int x;
unsigned long v;
unsigned long p;


v = 1;
p = 0;

for (x = 0; x <= 99; x++)
{
v += p;
printf("%lu", v);
p = v - p;
printf(", ");
}

printf("\n");
return (0);
}
