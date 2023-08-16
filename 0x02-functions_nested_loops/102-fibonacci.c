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
int ppt;

t = 0;
pt = 0;
ppt = 1;

for (x = 1; x <= 50; x++)
{

t = ppt + pt;
printf("%i ,", t);
ppt = pt;
pt = t;
}
printf("\n");
return (0);
}
