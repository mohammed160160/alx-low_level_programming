#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * multiply - Multiply 2 integers
 * @x: The first string
 * @y: The second string
 * @lenx: length of the first string
 * @leny: length of the second string
 * @size: The total length of the multiplication
 * Return: A pointer the the result
 */
int *multiply(char *x, char *y, int lenx, int leny, int size)
{
int xl = 0, yl = 0, xy = 0, v = 0;
int *result;
int count;

result = malloc(size * sizeof(int));
for (count = 0; count < size; count++)
{ result[count] = 0; }

for (yl = 0; yl < leny; yl++)
{
	for (xl = 1; xl <= lenx; xl++)
	{
	xy = 0;
	v = xl + yl;
	result[size - v] += (x[lenx - xl] - '0') * (y[leny - (yl + 1)] - '0');
		while (result[size - (v + xy)] > 9)
		{
		result[size - (v + xy + 1)] += result[size - (v + xy)] / 10;
		result[size - (v + xy)] = result[size - (v + xy)] % 10;
		xy++;
		}
	}
}

return (result);
}
/**
 * calloc_clone - create an array of char with the value of 0
 * @size: The size of the array in question
 * Return: A pointer to the array
 */
char *calloc_clone(int size)
{
char *empty;
int c;

empty = malloc((size + 1) * sizeof(char));

for (c = 0; c < size - 1; c++)
{
empty[c] = '0';
}

empty[size] = '\0';

return (empty);
}
/**
 * final_result - The final result
 * @m: A pointer to the result
 * @size: Size of the array m
 * Return: An array of char containing the final number
 */
char *final_result(int *m, int size)
{
char *result, *ult;
int counter = 0, down = 1, b = 0;

result = calloc_clone(size);
for (b = 0; b < size; b++)
{
result[b] = (m[b] + '0');
}
free(m);

if (result[0] != '0')
{
return (result);
}

ult = calloc_clone(size);

while (result[0] == '0' && ult[0] == '0' && ult[1] != '\0')
{
free(ult);
ult = calloc_clone(size - down);
	for (counter = size - 1; counter > (down - 1); counter--)
	{
	ult[counter - down] = result[counter];
	}
down++;
}

free(result);
return (ult);
}
/**
 * digit_checker - Checks if all elements of a string have a digit
 * @s: The string in question
 * Return: Nothing but if failed exit with an error message
 */
void digit_checker(char *s) /*Checks the digits*/
{
int z;

	for (z = 0; s[z] != '\0'; z++)
	{
		if (s[z] > 57 || s[z] < 48)
		{
		printf("Error\n");
		exit(98);
		}
	}
}
/**
 * main - Multiply 2 integers
 * @argc: The argument counter
 * @argv: The argument vector(array)
 * Return: 1 if enter more or less than 2 argmuents 0 if Sucessful
 */
int main(int argc, char *argv[])
{
char *x, *y;
int *res;
char *finalres;
int size = 0;

if (argc != 3)
{
printf("Error\n");
exit(98);
}

digit_checker(argv[1]);
digit_checker(argv[2]);

if (strlen(argv[1]) >= strlen(argv[2]))
{
x = argv[1];
y = argv[2];
}
else
{
x = argv[2];
y = argv[1];
}

size = strlen(x) + strlen(y);
res = multiply(x, y, strlen(x), strlen(y), size);
finalres = final_result(res, size);
printf("%s\n", finalres);
free(finalres);
return (0);
}

