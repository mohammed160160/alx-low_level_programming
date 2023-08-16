#include<stdio.h>
/**
 * main - writes the first 98 values of fibonacci sequence
 * Return: 0
 */
int main(void)
{
int x;
unsigned long l, lx ;
unsigned long v1, v2, p1, p2, ta, tb;
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
v1 = v / l;
v2 = v % l;
p1 = p / l;
p2 = p % l;

for (x = 92; x <= 97; x++)
{
ta = p1 + v1;
tb = p2 + v2;
if (t2 >= lx)
{
ta++
tb = tb % lx;
} 
printf("%lu%lu", ta, tb);
p1 = v1 - p1;
p2 = v2 - p2;
v1 = ta;
v2 = tb;
if (x != 5)
{
printf(", ");
}
}
printf("\n");
return (0);
}
