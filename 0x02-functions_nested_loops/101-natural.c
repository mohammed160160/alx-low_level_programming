#include<stdio.h>
/**
 * main - find the total for numbers that can divided by 3 or 5
 * Return: 0
 */
int main(void)
{
int x;
int t;

t = 0;

for (x = 0; x <= 1024; x++)
{
if (x % 3 == 0 || x % 5 == 0)
{
t = t + x;
}
}
printf("%li\n", t);
