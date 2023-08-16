#include<stdio.h>
/**
 * main - writes the first 98 values of fibonacci sequence
 * Return: 0
 */
int main(void)
{
int x;
unsigned long l ;
unsigned long v1, v2, p1, p2;
unsigned long v, p;

l = 1000000000;
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
for (x = 0; x <= 5; x++)
{
v1 += p1;
if (v2 + p2 >= 10000000000)
{
v2 = v2 + p2;
v2 = v2 - 10000000000;
v1++;
}
else 
{
v2 = v2 + p2;
}
printf("%lu%lu", v1, v2);
p1 = v1 - p1;
p2 = v2 - p2;
if (x != 5)
{
printf(", ");
}
}
printf("\n");
return (0);
}
