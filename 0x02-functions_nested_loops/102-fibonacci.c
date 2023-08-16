#include<stdio.h>
/**
 * main - writes the first 50 values of fibonacci sequence
 * Return: 0
 */
int main(void)
{
int x;
double t;
double pt;
double ppt;

t = 0;
pt = 0;
ppt = 1;

for (x = 1; x <= 50; x++)
{

t = ppt + pt;
printf("%d ,", t);
ppt = pt;
pt = t;
}
printf("\n");
return (0);
}
