#include<stdio.h>
/**
 * main - writes the sum of all even fibonacci numbers till 4000000
 * Return: 0
 */
int main(void)
{
long int x;
long int t;
long int pt;
long int ppt;

t = 0;
pt = 1;
ppt = 0;
x = 0;

while (t < 4000000)
{
t = ppt + pt;
ppt = pt;
pt = t;
if (t % 2 == 0)
{
x = x + t;
}
}

printf("%li\n", t);
return (0);
}
