#include<stdio.h>
/**
 * main - writes the first 98 values of fibonacci sequence
 * Return: 0
 */
int main(void)
{
int x;
unsigned long t;
unsigned long pt;
unsigned long ppt;
unsigned long pta;
unsigned long ptb;
unsigned long ppta;
unsigned long pptb;
unsigned long l = 1000000000;


t = 0;
pt = 1;
ppt = 0;

for (x = 0; x <= 92; x++)
{
t = ppt + pt;
printf("%lu", t);
ppt = pt;
pt = t;
printf(", ");
}

pta = pt / l;
ptb = pt % l;
ppta = ppt / l;
pptb = ppt % l;

for (x = 93; x <= 97; x++)
{
printf(", %lu", ppta + (pptb / l));
printf("%lu", pptb);
ppta = ppta + pta;
pta = ppta - pta;
pptb = pptb + ptb;
ptb = pptb - ptb;
}
printf("\n");
return (0);
}
