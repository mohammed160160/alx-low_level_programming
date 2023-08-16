#include<stdio.h>
/**
 * main - writes the first 98 values of fibonacci sequence
 * Return: 0
 */
int main(void)
{
int x;
unsigned long v;
unsigned long v1;
unsigned long v2;
unsigned long p;
unsigned long p1;
unsigned long p2;
unsigned long l;

l = 1000000000000;
v = 1;
p = 0;

for (x = 0; x <= 91; x++)
{
v += p;
printf("%lu", v);
p = v - p;
printf(", ");
}

v1 = v / l;
v2 = v % l;
p1 = p / l;
p2 = p % l;

for (x = 0; x <= 5; x++)
{
v1 += p1;
v2 += p2;
printf("%lu%lu", v1, v2)
p1 = v1 - p1;
p2 = v2 - p2;
}
printf("\n");
return (0);
}
