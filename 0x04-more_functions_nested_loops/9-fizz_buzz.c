#include<stdio.h>
/**
 * main - to type Fizz if it's a multiple of 3, Buff if it's a multiple of
 * 5 or both if it's multiple of 3 and 5
 * Return: 0
 */
int main(void)
{
int x;

for (x = 1; x <= 100 ; x++)
{
if (x % 3 == 0 && x % 5 == 0)
{
printf("FizzBuff");
}
else if (x % 5 == 0)
{
printf("Buff");
}
else if (x % 3 == 0)
{
printf("Fizz");
}
else
{
printf("%i", x);
}
printf(" ");
}
printf("\n");
return (0);
}
