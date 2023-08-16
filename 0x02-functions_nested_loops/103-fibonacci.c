#include<stdio.h>
/**
 * main - writes the sum of all even fibonacci numbers till 4000000
 * Return: 0
 */
int main(void)
{
double x;
double t;
double pt;
double ppt;

t = 0;
pt = 1;
ppt = 0;
x = 0;

while (t < 4000000)
{
t = ppt + pt;
printf("%.0f", t);
ppt = pt;
pt = t;
if ( t/2 == 0)
{
x = x + t;
}
}

printf("%.0f\n", x);
return (0);
}
