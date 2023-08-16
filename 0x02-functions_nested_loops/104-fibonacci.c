#include<stdio.h>
/**
 * main - writes the first 98 values of fibonacci sequence
 * Return: 0
 */
int main(void)
{
int x;
unsigned long l, lx;
unsigned long va, vb, pa, pb, ta, tb;
unsigned long v, p;

l = 100000000;
lx = 1000000000;
v = 1;
p = 0;
for (x = 0; x <= 91; x++)
{
v += p;
printf("%lu, ", v);
p = v - p;
}
va = v / l;
vb = v % l;
pa = p / l;
pb = p % l;
for (x = 92; x <= 97; x++)
{
ta = pa + va;
tb = pb + vb;
if (tb >= lx)
{
ta = ta + 1;
tb = tb - lx;
}
printf("%lu%lu", ta, tb);
p1 = v1 - p1;
p2 = v2 - p2;
v1 = ta;
v2 = tb;
if (x != 97)
{
printf(", ");
}
}
printf("\n");
return (0);
}
