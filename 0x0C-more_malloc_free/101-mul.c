#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
int x = 0;
int T = 0;
int z = 0;
char *c;

if (argc != 3)
{
printf("Error\n");
exit(98);
}

for (x = 1; x < 3; x++)/*checks if all characters are digits*/
{
c = argv[x];

	for (z = 0; c[z] != '\0'; z++)
	{
		if (c[z] > 57 || c[z] < 48)
		{
		exit(98);
		}
	}

}

T = atoi(argv[1]) * atoi(argv[2]);/*Calculates the total*/

return (T);
}
