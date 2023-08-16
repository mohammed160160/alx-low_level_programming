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
unsigned long lx;

l = 1000000000000;
v = 1;
p = 0;

for (x = 0; x <= 91; x++)
{
v += p;
printf("%lu, ", v);
p = v - p;
}

v1 = v / l;
v2 = v % l;
p1 = p / l;
p2 = p % l;
lx = l * 10;

for (x = 0; x <= 5; x++)
{
v1 += p1;
v2 += p2;
if (v2 > lx)
{
v2 = v2 - lx;
v1 = v1 + 1;
}
printf("%lu%lu", v1, v2);
p1 = v1 - p1;
p2 = v2 - p2;
if (x != 5)
{
printf(", ")
}
}
printf("\n");
return (0);
}
